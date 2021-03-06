<!--ferry routes-->
<Style name="ferry-routes">
	<Rule>
		<Filter>[route] = 'ferry'</Filter>
		&maxscale_zoom8;
		&minscale_zoom11;
		<LineSymbolizer stroke="#ffffff" stroke-width="1.5" stroke-dasharray="2,3"/>
	</Rule>
	<Rule>
		<Filter>[route] = 'ferry'</Filter>
		&maxscale_zoom12;
		<LineSymbolizer stroke="#ffffff" stroke-width="2" stroke-dasharray="2,3"/>
	</Rule>
</Style>
<!--pedestrian walkways-->
<Style name="pedestrian-walkways">
	<Rule>
		<Filter>[highway] = 'pedestrian' or [highway]='footway' or ([highway]='path' and !([bicycle]='designated')) or [highway]='track'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke="#e52540" stroke-width="1.5" stroke-opacity=".4" stroke-dasharray="1,3"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'pedestrian' or [highway]='footway' or ([highway]='path' and !([bicycle]='designated')) or [highway]='track'</Filter>
		&maxscale_zoom17;
		<LineSymbolizer stroke="#e52540" stroke-width="2" stroke-opacity=".4" stroke-dasharray="2,4"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'steps'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke="#e52540" stroke-width="3" stroke-opacity=".4" stroke-dasharray="1,2"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'steps'</Filter>
		&maxscale_zoom17;
		<LineSymbolizer stroke="#e52540" stroke-width="4" stroke-opacity=".4" stroke-dasharray="1,2"/>
	</Rule>
</Style>
<Style name="pedestrian-polygon">
	<Rule>
		<Filter>[highway] = 'living_street' or [highway] = 'pedestrian' or [highway]='service' or [highway]='footway' or [highway]='path' or [highway] = 'residential' or [highway]='unclassified' or [highway]='service' or [highway] = 'track'</Filter>
		&maxscale_zoom14;
		<PolygonSymbolizer fill="#c8c8c8"/>
	</Rule>
</Style>
<!--runway-->
<Style name="runway">
	<Rule>
		<Filter>[aeroway] = 'runway'</Filter>
		&maxscale_zoom10;
		&minscale_zoom12;
		<LineSymbolizer stroke="#b4b4b4" stroke-width="3"/>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'runway'</Filter>
		&maxscale_zoom13;
		&minscale_zoom14;
		<LineSymbolizer stroke="#b4b4b4" stroke-width="5"/>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'runway'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke="#b4b4b4" stroke-width="15"/>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'runway'</Filter>
		&maxscale_zoom17;
		<LineSymbolizer stroke="#b4b4b4" stroke-width="45"/>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'taxiway'</Filter>
		&maxscale_zoom12;
		&minscale_zoom12;
		<LineSymbolizer stroke="#b4b4b4" stroke-width="1"/>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'taxiway'</Filter>
		&maxscale_zoom13;
		&minscale_zoom14;
		<LineSymbolizer stroke="#b4b4b4" stroke-width="2"/>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'taxiway'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke="#b4b4b4" stroke-width="5"/>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'taxiway'</Filter>
		&maxscale_zoom17;
		<LineSymbolizer stroke="#b4b4b4" stroke-width="10"/>
	</Rule>
</Style>
<!--rail-->
<Style name="rail">
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'monorail'</Filter>
		&maxscale_zoom11;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#a6a8aa" stroke-width="1" stroke-dasharray="1,1"/>
	</Rule>
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'monorail'</Filter>
		&maxscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#afafaf" stroke-width="2.5"/>
	</Rule>
	<Rule>
		<Filter>[railway] = 'rail' or [railway] = 'light_rail' or [railway] = 'subway' or [railway] = 'monorail'</Filter>
		&maxscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="1.5" stroke-dasharray="5,4"/>
	</Rule>
</Style>
<!--alley casing-->
<Style name="alley casing">
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#bfbfbf" stroke-width=".5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#b3b1b2" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#b3b1b2" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#b3b1b2" stroke-width="7" stroke-linecap="round"/>
	</Rule>
</Style>
<!--street 4 casing-->
<Style name="street 4 casing">
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#b3b1b2" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#b3b1b2" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#b3b1b2" stroke-width="8" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#b3b1b2" stroke-width="10" stroke-linecap="round"/>
	</Rule>
</Style>
<!--street 3 casing-->
<Style name="street 3 casing">
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#bfb38f" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#ccad70" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#ccad70" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#ccad70" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#ccad70" stroke-width="10" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#ccad70" stroke-width="12" stroke-linecap="round"/>
	</Rule>
</Style>
<!--street 2 casing-->
<Style name="street 2 casing">
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom8;
		&minscale_zoom8;
		<LineSymbolizer stroke-linejoin="round" stroke="#d99836" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="#d99836" stroke-width="2.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#cc8f33" stroke-width="3.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#cc8f33" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#d0a14a" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#d0a14a" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#d0a14a" stroke-width="10" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#d0a14a" stroke-width="12" stroke-linecap="round"/>
	</Rule>
</Style>
<!--cul-de-sac-->
<Style name="cul-de-sac">
	<Rule>
		&maxscale_zoom15;
		&minscale_zoom15;
		<MarkersSymbolizer fill="white" stroke="#999999" stroke-width="1.5" width="4" height="4" placement="point" marker-type="ellipse"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom16;
		<MarkersSymbolizer fill="white" stroke="#999999" stroke-width="1.5" width="5" height="5" placement="point" marker-type="ellipse"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		&minscale_zoom17;
		<MarkersSymbolizer fill="white" stroke="#999999" stroke-width="1.5" width="8" height="8" placement="point" marker-type="ellipse"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<MarkersSymbolizer fill="white" stroke="#999999" stroke-width="2" width="10" height="10" placement="point" marker-type="ellipse"/>
	</Rule>
</Style>
<!--alley-->
<Style name="alley">
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#bfbfbf" stroke-width=".5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway]='service'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="5" stroke-linecap="round"/>
	</Rule>
</Style>
<!--street 4-->
<Style name="street 4">
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom12;
		<LineSymbolizer stroke-linejoin="round" stroke="#b4b4b4" stroke-width=".3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential_link' or [highway] = 'unclassified_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom13;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#b4b4b4" stroke-width=".5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'residential' or [highway] = 'living_street' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#ffffff" stroke-width="6" stroke-linecap="round"/>
	</Rule>
</Style>
<!--street 3-->
<Style name="street 3">
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom8;
		&minscale_zoom8;
		<LineSymbolizer stroke-linejoin="round" stroke="#bfbfbf" stroke-width=".5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="#a99f85" stroke-width=".5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#f4faa0" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#f2f291" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#f6f0a3" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#f6f0a3" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#f6f0a3" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'secondary' or [highway] = 'secondary_link' or [highway] = 'tertiary' or [highway] = 'tertiary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#f6f0a3" stroke-width="8" stroke-linecap="round"/>
	</Rule>
</Style>
<!--street 2-->
<Style name="street 2">
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom6;
		&minscale_zoom6;
		<LineSymbolizer stroke-linejoin="round" stroke="#646464" stroke-width=".5" stroke-linecap="round" stroke-opacity=".15"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom7;
		&minscale_zoom7;
		<LineSymbolizer stroke-linejoin="round" stroke="#e6b216" stroke-width=".75" stroke-linecap="round" stroke-opacity=".5"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom8;
		&minscale_zoom8;
		<LineSymbolizer stroke-linejoin="round" stroke="#f2c279" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="#f2c279" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#fac87d" stroke-width="1.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#fac87d" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#f5d290" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#f5d290" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#f5d290" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'trunk' or [highway] = 'primary' or [highway] = 'trunk_link' or [highway] = 'primary_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#f5d290" stroke-width="8" stroke-linecap="round"/>
	</Rule>
</Style>
<!--interchange casing-->
<Style name="ramp casing">
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#495f8c" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="#495f8c" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#495f8c" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#495f8c" stroke-width="10" stroke-linecap="round"/>
	</Rule>
</Style>
<!--street 1 casing-->
<Style name="street 1 casing">
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#2e4880" stroke-width="5"/>
	</Rule>
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#2e4880" stroke-width="6"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#495f8c" stroke-width="8"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#495f8c" stroke-width="10"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#495f8c" stroke-width="12"/>
	</Rule>
</Style>
<!--street 1 toll casing-->
<Style name="street 1 toll casing">
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#268026" stroke-width="5"/>
	</Rule>
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#268026" stroke-width="6"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#487c48" stroke-width="8"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#487c48" stroke-width="10"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#487c48" stroke-width="12"/>
	</Rule>
</Style>
<!--interchange-->
<Style name="ramp">
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom9;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="#476bb2" stroke-width="1.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="1.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="1.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'motorway_link'</Filter>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="6" stroke-linecap="round"/>
	</Rule>
</Style>
<!--street 1-->
<Style name="street 1">
	<Rule>
		&maxscale_zoom5;
		&minscale_zoom5;
		<LineSymbolizer stroke-linejoin="round" stroke="#0040ff" stroke-width="1" stroke-opacity=".1"/>
	</Rule>
	<Rule>
		&maxscale_zoom6;
		&minscale_zoom6;
		<LineSymbolizer stroke-linejoin="round" stroke="#0040ff" stroke-width="1.5" stroke-opacity=".2"/>
	</Rule>
	<Rule>
		&maxscale_zoom7;
		&minscale_zoom7;
		<LineSymbolizer stroke-linejoin="round" stroke="#406dcc" stroke-width="1.5" stroke-opacity=".5"/>
	</Rule>
	<Rule>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="#476bb2" stroke-width="4"/>
	</Rule>
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="3"/>
	</Rule>
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="4"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="5"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="7"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#6c91d9" stroke-width="10"/>
	</Rule>
</Style>
<!--street 1 centerline-->
<Style name="centerline">
	<Rule>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="#b6caf2" stroke-width="1"/>
	</Rule>
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#d3dbeb" stroke-width="1"/>
	</Rule>
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#d3dbeb" stroke-width="1.5"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#d3dbeb" stroke-width="2"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#d3dbeb" stroke-width="3"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#d3dbeb" stroke-width="4"/>
	</Rule>
</Style>
<!--street 1 toll-->
<Style name="street 1 toll">
	<Rule>
		&maxscale_zoom5;
		&minscale_zoom5;
		<LineSymbolizer stroke-linejoin="round" stroke="#0040ff" stroke-width="1" stroke-opacity=".1"/>
	</Rule>
	<Rule>
		&maxscale_zoom6;
		&minscale_zoom6;
		<LineSymbolizer stroke-linejoin="round" stroke="#0040ff" stroke-width="1.5" stroke-opacity=".2"/>
	</Rule>
	<Rule>
		&maxscale_zoom7;
		&minscale_zoom7;
		<LineSymbolizer stroke-linejoin="round" stroke="#77b383" stroke-width="1.5" stroke-opacity=".5"/>
	</Rule>
	<Rule>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="#4d994d" stroke-width="4"/>
	</Rule>
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#88cc66" stroke-width="3"/>
	</Rule>
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#88cc66" stroke-width="4"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#86c269" stroke-width="5"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#86c269" stroke-width="7"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#86c269" stroke-width="10"/>
	</Rule>
</Style>
<!--street 1 toll centerline-->
<Style name="centerline toll">
	<Rule>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="#9ccc85" stroke-width="1"/>
	</Rule>
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="#d9e5d3" stroke-width="1"/>
	</Rule>
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="#d9e5d3" stroke-width="1.5"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="#d5e8d8" stroke-width="2"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="#d5e8d8" stroke-width="3"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="#d5e8d8" stroke-width="4"/>
	</Rule>
</Style>

<Layer name="ferry-routes" status="on" srs="&osm2pgsql_projection;">
	<StyleName>ferry-routes</StyleName>
	<Datasource>
		<Parameter name="table">
			(&sql-ferry-routes;) as data
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="pedestrian-walkways" status="on" srs="&osm2pgsql_projection;">
	<StyleName>pedestrian-walkways</StyleName>
	<Datasource>
		<Parameter name="table">
			(&sql-pedestrian-walkways;) as data
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="pedestrian-polygon" status="on" srs="&osm2pgsql_projection;">
	<StyleName>pedestrian-polygon</StyleName>
	<Datasource>
		<Parameter name="table">
			(&sql-pedestrian-polygon;) as data
		</Parameter>
      &datasource-settings;
	</Datasource>
</Layer>
&layer-transportation-common-cycleway;
<Layer name="runway" status="on" srs="&osm2pgsql_projection;">
	<StyleName>runway</StyleName>
	<Datasource>
		<Parameter name="table">
			(&sql-runway;) as data
		</Parameter>
      &datasource-settings;
	</Datasource>
</Layer>
<Layer name="rail" status="on" srs="&osm2pgsql_projection;">
	<StyleName>rail</StyleName>
	<Datasource>
		<Parameter name="table">
	      (&sql-rail;) as data
      </Parameter>
      &datasource-settings;
	</Datasource>
</Layer>
<Layer name="ramp casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>ramp casing</StyleName>
	<Datasource>
		<Parameter name="table">
			(&sql-ramp;) as data
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="alley casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>alley casing</StyleName>
	<Datasource>
		<Parameter name="table">
	      (&sql-alley;) as data
      </Parameter>
      &datasource-settings;
	</Datasource>
</Layer>
<Layer name="street 4 casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street 4 casing</StyleName>
	<Datasource>
		<Parameter name="table">
	      (&sql-street4;) as data
      </Parameter>
      &datasource-settings;
	</Datasource>
</Layer>
<Layer name="street 3 casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street 3 casing</StyleName>
	<Datasource>
		<Parameter name="table">
			(&sql-street3;) as data
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street 2 casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street 2 casing</StyleName>
	<Datasource>
		<Parameter name="table">
			(&sql-street2;) as data
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="cul-de-sac" status="on" srs="&osm2pgsql_projection;">
	<StyleName>cul-de-sac</StyleName>
	<Datasource>
		<Parameter name="table">(select way from &prefix;_point where highway='turning_circle') as turning_circle</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="ramp" status="on" srs="&osm2pgsql_projection;">
	<StyleName>ramp</StyleName>
	<Datasource>
		<Parameter name="table">
			(&sql-ramp;) as data
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="alley" status="on" srs="&osm2pgsql_projection;">
	<StyleName>alley</StyleName>
	<Datasource>
		<Parameter name="table">
		(&sql-alley;) as data
      </Parameter>
      &datasource-settings;
	</Datasource>
</Layer>
<Layer name="street 4" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street 4</StyleName>
	<Datasource>
		<Parameter name="table">
	      (&sql-street4;) as data
      </Parameter>
      &datasource-settings;
	</Datasource>
</Layer>
<Layer name="street 3" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street 3</StyleName>
	<Datasource>
		<Parameter name="table">
			(&sql-street3;) as data
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street 2" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street 2</StyleName>
	<Datasource>
		<Parameter name="table">
			(&sql-street2;) as data
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street 1 casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street 1 casing</StyleName>
	<Datasource>
		<Parameter name="table">
			(&sql-street1;) as data
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street 1 toll casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street 1 toll casing</StyleName>
	<Datasource>
		<Parameter name="table">
			(&sql-street1-toll;) as data
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street 1" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street 1</StyleName>
	<Datasource>
		<Parameter name="table">
			(&sql-street1;) as data
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="centerline" status="on" srs="&osm2pgsql_projection;">
	<StyleName>centerline</StyleName>
	<Datasource>
		<Parameter name="table">
			(&sql-street1;) as data
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street 1 toll" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street 1 toll</StyleName>
	<Datasource>
		<Parameter name="table">
			(&sql-street1-toll;) as data
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="centerline toll" status="on" srs="&osm2pgsql_projection;">
	<StyleName>centerline toll</StyleName>
	<Datasource>
		<Parameter name="table">
			(&sql-street1-toll;) as data
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
