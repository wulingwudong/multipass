/*
 * Copyright (C) 2018 Canonical, Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef MULTIPASS_PROCESS_SPEC_H
#define MULTIPASS_PROCESS_SPEC_H

#include <QStringList>

namespace multipass
{

class ProcessSpec
{
public:
    ProcessSpec() = default;
    virtual ~ProcessSpec() = default;

    virtual QString program() const = 0;
    virtual QStringList arguments() const = 0;
    virtual QString apparmor_profile() const = 0;
    virtual QString identifier() const = 0;

protected:
    const QString apparmor_profile_name() const;
};

} // namespace multipass

#endif // MULTIPASS_PROCESS_SPEC_H