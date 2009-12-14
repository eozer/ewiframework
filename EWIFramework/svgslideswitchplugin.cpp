/*
 * Copyright (c) 2009 Roberto Estrada Casarrubios
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *    This product includes software developed by Roberto Estrada Casarrubios.
 * 4. Neither the name of copyright holders nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ''AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL COPYRIGHT HOLDERS OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include "svgslideswitchplugin.h"

SVGSlideSwitchPlugin::SVGSlideSwitchPlugin(QObject *parent) : QObject(parent)
{
    initialized = false;
}

void SVGSlideSwitchPlugin::initialize(QDesignerFormEditorInterface *core)
{
    if(initialized)
    {
        return;
    }
    initialized = true;
}

bool SVGSlideSwitchPlugin::isInitialized() const
{
    return initialized;
}

QWidget* SVGSlideSwitchPlugin::createWidget(QWidget *parent)
{
    QtSvgSlideSwitch *slide = new QtSvgSlideSwitch(parent);
    slide->setSkin("MetallicBrush");
    return slide;
}

QString SVGSlideSwitchPlugin::name() const
{
    return "QtSvgSlideSwitch";
}

QString SVGSlideSwitchPlugin::group() const
{
    return "Qt Embedded Widgets";
}

QIcon SVGSlideSwitchPlugin::icon() const
{
    return QIcon();
}

QString SVGSlideSwitchPlugin::toolTip() const
{
     return "An SVG dial gauge widget";
}

QString SVGSlideSwitchPlugin::whatsThis() const
{
     return "An SVG dial gauge widget";
}

bool SVGSlideSwitchPlugin::isContainer() const
{
     return false;
}

QString SVGSlideSwitchPlugin::includeFile() const
{
     return "<QtSvgSlideSwitch>";
}

QString SVGSlideSwitchPlugin::domXml() const
{
     return "<ui language=\"c++\">\n"
            " <widget class=\"QtSvgSlideSwitch\" name=\"SVGSlideSwitch\">\n"
            "  <property name=\"geometry\">\n"
            "   <rect>\n"
            "    <x>0</x>\n"
            "    <y>0</y>\n"
            "    <width>150</width>\n"
            "    <height>150</height>\n"
            "   </rect>\n"
            "  </property>\n"
            "  <property name=\"toolTip\" >\n"
            "   <string>An SVG slide switch widget.</string>\n"
            "  </property>\n"
            "  <property name=\"whatsThis\" >\n"
            "   <string>An SVG slide switch widget.</string>\n"
            "  </property>\n"
            " </widget>\n"
            "</ui>\n";
 }
