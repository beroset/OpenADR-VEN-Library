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

#include "ReportSpecifierType.hxx"

#include "DurationPropType.hxx"

#include "WsCalendarIntervalType.hxx"

#include "SpecifierPayloadType.hxx"

namespace oadr2b
{
  namespace ei
  {
    // ReportSpecifierType
    // 

    const ReportSpecifierType::reportSpecifierID_type& ReportSpecifierType::
    reportSpecifierID () const
    {
      return this->reportSpecifierID_.get ();
    }

    ReportSpecifierType::reportSpecifierID_type& ReportSpecifierType::
    reportSpecifierID ()
    {
      return this->reportSpecifierID_.get ();
    }

    void ReportSpecifierType::
    reportSpecifierID (const reportSpecifierID_type& x)
    {
      this->reportSpecifierID_.set (x);
    }

    void ReportSpecifierType::
    reportSpecifierID (::std::auto_ptr< reportSpecifierID_type > x)
    {
      this->reportSpecifierID_.set (x);
    }

    const ReportSpecifierType::granularity_type& ReportSpecifierType::
    granularity () const
    {
      return this->granularity_.get ();
    }

    ReportSpecifierType::granularity_type& ReportSpecifierType::
    granularity ()
    {
      return this->granularity_.get ();
    }

    void ReportSpecifierType::
    granularity (const granularity_type& x)
    {
      this->granularity_.set (x);
    }

    void ReportSpecifierType::
    granularity (::std::auto_ptr< granularity_type > x)
    {
      this->granularity_.set (x);
    }

    const ReportSpecifierType::reportBackDuration_type& ReportSpecifierType::
    reportBackDuration () const
    {
      return this->reportBackDuration_.get ();
    }

    ReportSpecifierType::reportBackDuration_type& ReportSpecifierType::
    reportBackDuration ()
    {
      return this->reportBackDuration_.get ();
    }

    void ReportSpecifierType::
    reportBackDuration (const reportBackDuration_type& x)
    {
      this->reportBackDuration_.set (x);
    }

    void ReportSpecifierType::
    reportBackDuration (::std::auto_ptr< reportBackDuration_type > x)
    {
      this->reportBackDuration_.set (x);
    }

    const ReportSpecifierType::reportInterval_optional& ReportSpecifierType::
    reportInterval () const
    {
      return this->reportInterval_;
    }

    ReportSpecifierType::reportInterval_optional& ReportSpecifierType::
    reportInterval ()
    {
      return this->reportInterval_;
    }

    void ReportSpecifierType::
    reportInterval (const reportInterval_type& x)
    {
      this->reportInterval_.set (x);
    }

    void ReportSpecifierType::
    reportInterval (const reportInterval_optional& x)
    {
      this->reportInterval_ = x;
    }

    void ReportSpecifierType::
    reportInterval (::std::auto_ptr< reportInterval_type > x)
    {
      this->reportInterval_.set (x);
    }

    const ReportSpecifierType::specifierPayload_sequence& ReportSpecifierType::
    specifierPayload () const
    {
      return this->specifierPayload_;
    }

    ReportSpecifierType::specifierPayload_sequence& ReportSpecifierType::
    specifierPayload ()
    {
      return this->specifierPayload_;
    }

    void ReportSpecifierType::
    specifierPayload (const specifierPayload_sequence& s)
    {
      this->specifierPayload_ = s;
    }
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

namespace oadr2b
{
  namespace ei
  {
    // ReportSpecifierType
    //

    ReportSpecifierType::
    ReportSpecifierType (const reportSpecifierID_type& reportSpecifierID,
                         const granularity_type& granularity,
                         const reportBackDuration_type& reportBackDuration)
    : ::xml_schema::type (),
      reportSpecifierID_ (reportSpecifierID, this),
      granularity_ (granularity, this),
      reportBackDuration_ (reportBackDuration, this),
      reportInterval_ (this),
      specifierPayload_ (this)
    {
    }

    ReportSpecifierType::
    ReportSpecifierType (const reportSpecifierID_type& reportSpecifierID,
                         ::std::auto_ptr< granularity_type > granularity,
                         ::std::auto_ptr< reportBackDuration_type > reportBackDuration)
    : ::xml_schema::type (),
      reportSpecifierID_ (reportSpecifierID, this),
      granularity_ (granularity, this),
      reportBackDuration_ (reportBackDuration, this),
      reportInterval_ (this),
      specifierPayload_ (this)
    {
    }

    ReportSpecifierType::
    ReportSpecifierType (::std::auto_ptr< reportSpecifierID_type > reportSpecifierID,
                         ::std::auto_ptr< granularity_type > granularity,
                         ::std::auto_ptr< reportBackDuration_type > reportBackDuration)
    : ::xml_schema::type (),
      reportSpecifierID_ (reportSpecifierID, this),
      granularity_ (granularity, this),
      reportBackDuration_ (reportBackDuration, this),
      reportInterval_ (this),
      specifierPayload_ (this)
    {
    }

    ReportSpecifierType::
    ReportSpecifierType (const ReportSpecifierType& x,
                         ::xml_schema::flags f,
                         ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      reportSpecifierID_ (x.reportSpecifierID_, f, this),
      granularity_ (x.granularity_, f, this),
      reportBackDuration_ (x.reportBackDuration_, f, this),
      reportInterval_ (x.reportInterval_, f, this),
      specifierPayload_ (x.specifierPayload_, f, this)
    {
    }

    ReportSpecifierType::
    ReportSpecifierType (const ::xercesc::DOMElement& e,
                         ::xml_schema::flags f,
                         ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      reportSpecifierID_ (this),
      granularity_ (this),
      reportBackDuration_ (this),
      reportInterval_ (this),
      specifierPayload_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
        this->parse (p, f);
      }
    }

    void ReportSpecifierType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // reportSpecifierID
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "reportSpecifierID",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              &::xsd::cxx::tree::factory_impl< reportSpecifierID_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!reportSpecifierID_.present ())
            {
              ::std::auto_ptr< reportSpecifierID_type > r (
                dynamic_cast< reportSpecifierID_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->reportSpecifierID_.set (r);
              continue;
            }
          }
        }

        // granularity
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "granularity",
              "urn:ietf:params:xml:ns:icalendar-2.0",
              &::xsd::cxx::tree::factory_impl< granularity_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!granularity_.present ())
            {
              ::std::auto_ptr< granularity_type > r (
                dynamic_cast< granularity_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->granularity_.set (r);
              continue;
            }
          }
        }

        // reportBackDuration
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "reportBackDuration",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              &::xsd::cxx::tree::factory_impl< reportBackDuration_type >,
              false, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!reportBackDuration_.present ())
            {
              ::std::auto_ptr< reportBackDuration_type > r (
                dynamic_cast< reportBackDuration_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->reportBackDuration_.set (r);
              continue;
            }
          }
        }

        // reportInterval
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "reportInterval",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              &::xsd::cxx::tree::factory_impl< reportInterval_type >,
              false, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!this->reportInterval_)
            {
              ::std::auto_ptr< reportInterval_type > r (
                dynamic_cast< reportInterval_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->reportInterval_.set (r);
              continue;
            }
          }
        }

        // specifierPayload
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "specifierPayload",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              &::xsd::cxx::tree::factory_impl< specifierPayload_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            ::std::auto_ptr< specifierPayload_type > r (
              dynamic_cast< specifierPayload_type* > (tmp.get ()));

            if (r.get ())
              tmp.release ();
            else
              throw ::xsd::cxx::tree::not_derived< char > ();

            this->specifierPayload_.push_back (r);
            continue;
          }
        }

        break;
      }

      if (!reportSpecifierID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "reportSpecifierID",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }

      if (!granularity_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "granularity",
          "urn:ietf:params:xml:ns:icalendar-2.0");
      }

      if (!reportBackDuration_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "reportBackDuration",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }
    }

    ReportSpecifierType* ReportSpecifierType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class ReportSpecifierType (*this, f, c);
    }

    ReportSpecifierType& ReportSpecifierType::
    operator= (const ReportSpecifierType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->reportSpecifierID_ = x.reportSpecifierID_;
        this->granularity_ = x.granularity_;
        this->reportBackDuration_ = x.reportBackDuration_;
        this->reportInterval_ = x.reportInterval_;
        this->specifierPayload_ = x.specifierPayload_;
      }

      return *this;
    }

    ReportSpecifierType::
    ~ReportSpecifierType ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, ReportSpecifierType >
    _xsd_ReportSpecifierType_type_factory_init (
      "ReportSpecifierType",
      "http://docs.oasis-open.org/ns/energyinterop/201110");
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace ei
  {
  }
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

namespace oadr2b
{
  namespace ei
  {
    void
    operator<< (::xercesc::DOMElement& e, const ReportSpecifierType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // reportSpecifierID
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const ReportSpecifierType::reportSpecifierID_type& x (i.reportSpecifierID ());
        if (typeid (ReportSpecifierType::reportSpecifierID_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "reportSpecifierID",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "reportSpecifierID",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            true, true, e, x);
      }

      // granularity
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const ReportSpecifierType::granularity_type& x (i.granularity ());
        if (typeid (ReportSpecifierType::granularity_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "granularity",
              "urn:ietf:params:xml:ns:icalendar-2.0",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "granularity",
            "urn:ietf:params:xml:ns:icalendar-2.0",
            true, true, e, x);
      }

      // reportBackDuration
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const ReportSpecifierType::reportBackDuration_type& x (i.reportBackDuration ());
        if (typeid (ReportSpecifierType::reportBackDuration_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "reportBackDuration",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "reportBackDuration",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            false, true, e, x);
      }

      // reportInterval
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        if (i.reportInterval ())
        {
          const ReportSpecifierType::reportInterval_type& x (*i.reportInterval ());
          if (typeid (ReportSpecifierType::reportInterval_type) == typeid (x))
          {
            ::xercesc::DOMElement& s (
              ::xsd::cxx::xml::dom::create_element (
                "reportInterval",
                "http://docs.oasis-open.org/ns/energyinterop/201110",
                e));

            s << x;
          }
          else
            tsm.serialize (
              "reportInterval",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              false, true, e, x);
        }
      }

      // specifierPayload
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        for (ReportSpecifierType::specifierPayload_const_iterator
             b (i.specifierPayload ().begin ()), n (i.specifierPayload ().end ());
             b != n; ++b)
        {
          if (typeid (ReportSpecifierType::specifierPayload_type) == typeid (*b))
          {
            ::xercesc::DOMElement& s (
              ::xsd::cxx::xml::dom::create_element (
                "specifierPayload",
                "http://docs.oasis-open.org/ns/energyinterop/201110",
                e));

            s << *b;
          }
          else
            tsm.serialize (
              "specifierPayload",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              true, true, e, *b);
        }
      }
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, ReportSpecifierType >
    _xsd_ReportSpecifierType_type_serializer_init (
      "ReportSpecifierType",
      "http://docs.oasis-open.org/ns/energyinterop/201110");
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>
