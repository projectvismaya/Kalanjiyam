// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_FILENAMECOMPLETER_H
#define _GIOMM_FILENAMECOMPLETER_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

//#include <giomm/file.h>
#include <glibmm/arrayhandle.h>
#include <glibmm/object.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GFilenameCompleter GFilenameCompleter;
typedef struct _GFilenameCompleterClass GFilenameCompleterClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class FilenameCompleter_Class; } // namespace Gio
namespace Gio
{

class File;

/** Completes partial file and directory names given a partial string by looking in the file system for clues. 
 * Can return a list of possible completion strings for widget implementation.
 *
 * @newin{2,16}
 */

class FilenameCompleter : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef FilenameCompleter CppObjectType;
  typedef FilenameCompleter_Class CppClassType;
  typedef GFilenameCompleter BaseObjectType;
  typedef GFilenameCompleterClass BaseClassType;

private:  friend class FilenameCompleter_Class;
  static CppClassType filenamecompleter_class_;

private:
  // noncopyable
  FilenameCompleter(const FilenameCompleter&);
  FilenameCompleter& operator=(const FilenameCompleter&);

protected:
  explicit FilenameCompleter(const Glib::ConstructParams& construct_params);
  explicit FilenameCompleter(GFilenameCompleter* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~FilenameCompleter();

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GFilenameCompleter*       gobj()       { return reinterpret_cast<GFilenameCompleter*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GFilenameCompleter* gobj() const { return reinterpret_cast<GFilenameCompleter*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GFilenameCompleter* gobj_copy();

private:

protected:
  FilenameCompleter();
  
public:
  
  static Glib::RefPtr<FilenameCompleter> create();


  /** Obtains a completion for @a initial_text from @a completer.
   * @param initial_text Text to be completed.
   * @return A completed string, or <tt>0</tt> if no completion exists. 
   * This string is not owned by GIO, so remember to Glib::free() it 
   * when finished.
   */
  std::string get_completion_suffix(const std::string& initial_text) const;
  
   
  /** Gets an array of completion strings for a given initial text.
   * @param initial_text Text to be completed.
   * @return Array of strings with possible completions for @a initial_text.
   * This array must be freed by Glib::strfreev() when finished.
   */
  Glib::StringArrayHandle get_completions(const std::string& initial_text) const;
  
  /** If @a dirs_only is <tt>true</tt>, @a completer will only 
   * complete directory names, and not file names.
   * @param dirs_only A <tt>bool</tt>.
   */
  void set_dirs_only(bool dirs_only =  true);

  
/**
   * @par Slot Prototype:
   * <tt>void on_my_%got_completion_data()</tt>
   *
   * Emitted when the file name completion information comes available.
   */

  Glib::SignalProxy0< void > signal_got_completion_data();


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_got_completion_data().
  virtual void on_got_completion_data();


};

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::FilenameCompleter
   */
  Glib::RefPtr<Gio::FilenameCompleter> wrap(GFilenameCompleter* object, bool take_copy = false);
}


#endif /* _GIOMM_FILENAMECOMPLETER_H */
