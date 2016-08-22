// Copyright (c) 2005-2011 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

#include <xsd/cxx/pre.hxx>

// Begin prologue.
//
//
// End prologue.

#include "iconType.hxx"

namespace Atom
{
  // iconType
  // 

  const iconType::base_optional& iconType::
  base () const
  {
    return this->base_;
  }

  iconType::base_optional& iconType::
  base ()
  {
    return this->base_;
  }

  void iconType::
  base (const base_type& x)
  {
    this->base_.set (x);
  }

  void iconType::
  base (const base_optional& x)
  {
    this->base_ = x;
  }

  void iconType::
  base (::std::auto_ptr< base_type > x)
  {
    this->base_.set (x);
  }

  const iconType::lang_optional& iconType::
  lang () const
  {
    return this->lang_;
  }

  iconType::lang_optional& iconType::
  lang ()
  {
    return this->lang_;
  }

  void iconType::
  lang (const lang_type& x)
  {
    this->lang_.set (x);
  }

  void iconType::
  lang (const lang_optional& x)
  {
    this->lang_ = x;
  }

  void iconType::
  lang (::std::auto_ptr< lang_type > x)
  {
    this->lang_.set (x);
  }
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

#include <xsd/cxx/tree/type-factory-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_factory_plate< 0, char >
  type_factory_plate_init;
}

namespace Atom
{
  // iconType
  //

  iconType::
  iconType (const ::xml_schema::uri& _xsd_uri_base)
  : ::xml_schema::uri (_xsd_uri_base),
    base_ (this),
    lang_ (this)
  {
  }

  iconType::
  iconType (const iconType& x,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xml_schema::uri (x, f, c),
    base_ (x.base_, f, this),
    lang_ (x.lang_, f, this)
  {
  }

  iconType::
  iconType (const ::xercesc::DOMElement& e,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
  : ::xml_schema::uri (e, f | ::xml_schema::flags::base, c),
    base_ (this),
    lang_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, false, true);
      this->parse (p, f);
    }
  }

  void iconType::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    while (p.more_attributes ())
    {
      const ::xercesc::DOMAttr& i (p.next_attribute ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      if (n.name () == "base" && n.namespace_ () == "http://www.w3.org/XML/1998/namespace")
      {
        this->base_.set (base_traits::create (i, f, this));
        continue;
      }

      if (n.name () == "lang" && n.namespace_ () == "http://www.w3.org/XML/1998/namespace")
      {
        this->lang_.set (lang_traits::create (i, f, this));
        continue;
      }
    }
  }

  iconType* iconType::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class iconType (*this, f, c);
  }

  iconType& iconType::
  operator= (const iconType& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema::uri& > (*this) = x;
      this->base_ = x.base_;
      this->lang_ = x.lang_;
    }

    return *this;
  }

  iconType::
  ~iconType ()
  {
  }

  static
  const ::xsd::cxx::tree::type_factory_initializer< 0, char, iconType >
  _xsd_iconType_type_factory_init (
    "iconType",
    "http://www.w3.org/2005/Atom");
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace Atom
{
}

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

#include <xsd/cxx/tree/type-serializer-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_serializer_plate< 0, char >
  type_serializer_plate_init;
}

namespace Atom
{
  void
  operator<< (::xercesc::DOMElement& e, const iconType& i)
  {
    e << static_cast< const ::xml_schema::uri& > (i);

    // base
    //
    if (i.base ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "base",
          "http://www.w3.org/XML/1998/namespace",
          e));

      a << *i.base ();
    }

    // lang
    //
    if (i.lang ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "lang",
          "http://www.w3.org/XML/1998/namespace",
          e));

      a << *i.lang ();
    }
  }

  static
  const ::xsd::cxx::tree::type_serializer_initializer< 0, char, iconType >
  _xsd_iconType_type_serializer_init (
    "iconType",
    "http://www.w3.org/2005/Atom");
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>
