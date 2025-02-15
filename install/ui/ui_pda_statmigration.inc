<Page Location='534,54'
      MinimumSize='347,478'
      Name='StatMigration'
      ScrollExtent='347,478'
      Size='347,478'
      UserMovable='true'
      UserResizable='true'
      Visible='false'>
	<Data buttonCancel='buttonCancel'
	      buttonclose='bg.mmc.close'
	      buttonOk='buttonOk'
	      checkPopUpHelp='checkPopupHelp'
	      info='info'
	      Name='CodeData'
	      pointsLeft='stats.points.points'
	      PopupHelp='PopupHelp'
	      statsAction='stats.comp.action'
	      statsConstitution='stats.comp.constitution'
	      statsFocus='stats.comp.focus'
	      statsHealth='stats.comp.health'
	      statsMind='stats.comp.mind'
	      statsQuickness='stats.comp.quickness'
	      statsStamina='stats.comp.stamina'
	      statsStrength='stats.comp.strength'
	      statsWillPower='stats.comp.willpower'/>

	<Page Location='10,31'
	      Name='stats'
	      PackLocation='nfn,nfn'
	      PackSize='a,a'
	      ScrollExtent='327,416'
	      Size='327,416'>
		<Page BackgroundColor='#FFFFFF'
		      BackgroundOpacity='0.70'
		      BackgroundTint='#00D6FB'
		      Location='8,5'
		      Name='desc'
		      PackLocation='nfn,nfn'
		      PackSize='a,f'
		      PalBgTint='back1'
		      RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
		      ScrollExtent='312,81'
		      Size='312,81'>
			<Text Font='bold_12'
			      GetsInput='true'
			      LocalText='[@ui_charsheet:image_design_note]'
			      Location='5,5'
			      Margin='2,0,2,0'
			      Name='textDesc'
			      PackSize='a,a'
			      PalText='text1'
			      RStyleDefault='rs_default'
			      ScrollExtent='302,72'
			      Size='302,72'
			      TextColor='#96F4FC'>@ui_charsheet:image_design_note</Text>
			<Page Name='bg'
			      PackLocation='nfn,nfn'
			      PackSize='a,a'
			      ScrollExtent='312,81'
			      Size='312,81'>
				<Page BackgroundColor='#FFFFFF'
				      BackgroundOpacity='0.70'
				      BackgroundTint='#1CFFFF'
				      GetsInput='false'
				      Name='frame'
				      PackLocation='nfn,nfn'
				      PackSize='a,a'
				      PalBgTint='line1'
				      RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
				      ScrollExtent='312,81'
				      Size='312,81'/>
				<Page BackgroundColor='#FFFFFF'
				      BackgroundOpacity='0.60'
				      BackgroundTint='#00D6FB'
				      Location='2,2'
				      Name='inFrame'
				      PackLocation='nfn,nfn'
				      PackSize='a,a'
				      PalBgTint='back1'
				      RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
				      ScrollExtent='307,78'
				      Size='307,78'/>
			</Page>
		</Page>
		<Text Font='bold_12'
		      LocalText='[@stat_target]'
		      Location='231,86'
		      MaxLines='1'
		      MinimumSize='0,19'
		      Name='targetLabel'
		      PackLocation='fpf,nfn'
		      PackSize='p,f'
		      PalText='header'
		      ScrollExtent='92,20'
		      Size='92,20'
		      TextAlignment='Center'
		      TextAlignmentVertical='Center'
		      TextColor='#97FFFF'>@stat_target</Text>
		<Text Font='bold_12'
		      LocalText='[@stat_current]'
		      Location='30,86'
		      MaxLines='1'
		      MinimumSize='0,19'
		      Name='currentLabel'
		      PackLocation='nfn,nfn'
		      PackSize='p,f'
		      PalText='header'
		      ScrollExtent='103,20'
		      Size='103,20'
		      TextAlignment='Center'
		      TextAlignmentVertical='Center'
		      TextColor='#97FFFF'>@stat_current</Text>
		<Composite FillRemainder='false'
		           Location='5,105'
		           Name='comp'
		           PackLocation='nfn,nfn'
		           PackSize='a,a'
		           RStyleDefault='rs_default'
		           ScrollExtent='316,272'
		           Size='316,272'
		           Spacing='3'
		           SpacingType='Fill'>
			<Page info.comp.details.visible='parent.info.comp.details.visible'
			      info.comp.pack='t'
			      Location='10,0'
			      Name='health'
			      PackSize='a,p'
			      RStyleDefault='/Styles.New.whiteOutline.rs_default'
			      ScrollExtent='299,27'
			      Selectable='true'
			      Size='299,27'>
				<Text Font='bold_12'
				      LocalText='[@att_n:health]'
				      Location='2,7'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='title'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='87,21'
				      Size='87,21'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>@att_n:health</Text>
				<Text Font='bold_12'
				      LocalText='xxx 0'
				      Location='90,7'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='current'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='28,21'
				      Size='28,21'
				      TextAlignment='Right'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>xxx 0</Text>
				<Text Font='bold_12'
				      LocalText='xxx 1000'
				      Location='250,7'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='target'
				      PackLocation='fff,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='49,21'
				      Size='49,21'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>xxx 1000</Text>
				<Sliderbar Location='123,11'
				           Name='stat'
				           OnDisable='visible=false'
				           OnEnable='visible=true'
				           PackLocation='cfc,nfn'
				           PackSize='p,f'
				           ScrollExtent='122,14'
				           Size='122,14'
				           Style='/Styles.New.Slider.default.horizontal.style_test'
				           UpperLimit='1000'/>
			</Page>
			<Page info.comp.details.visible='parent.info.comp.details.visible'
			      info.comp.pack='t'
			      Location='10,30'
			      Name='strength'
			      PackSize='a,p'
			      RStyleDefault='/Styles.New.whiteOutline.rs_default'
			      ScrollExtent='299,27'
			      Selectable='true'
			      Size='299,27'>
				<Sliderbar Location='123,11'
				           Name='stat'
				           OnDisable='visible=false'
				           OnEnable='visible=true'
				           PackLocation='cfc,nfn'
				           PackSize='p,f'
				           ScrollExtent='122,14'
				           Size='122,14'
				           Style='/Styles.New.Slider.default.horizontal.style_test'
				           UpperLimit='1000'/>
				<Text Font='bold_12'
				      LocalText='[@att_n:strength]'
				      Location='2,7'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='title'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='87,21'
				      Size='87,21'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>@att_n:strength</Text>
				<Text Font='bold_12'
				      LocalText='xxx 0'
				      Location='90,7'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='current'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='28,21'
				      Size='28,21'
				      TextAlignment='Right'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>xxx 0</Text>
				<Text Font='bold_12'
				      LocalText='xxx 1000'
				      Location='250,6'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='target'
				      PackLocation='fff,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='49,21'
				      Size='49,21'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>xxx 1000</Text>
			</Page>
			<Page info.comp.details.visible='parent.info.comp.details.visible'
			      info.comp.pack='t'
			      Location='10,60'
			      Name='constitution'
			      PackSize='a,p'
			      RStyleDefault='/Styles.New.whiteOutline.rs_default'
			      ScrollExtent='299,27'
			      Selectable='true'
			      Size='299,27'>
				<Sliderbar Location='123,9'
				           Name='stat'
				           OnDisable='visible=false'
				           OnEnable='visible=true'
				           PackLocation='cfc,nfn'
				           PackSize='p,f'
				           ScrollExtent='122,14'
				           Size='122,14'
				           Style='/Styles.New.Slider.default.horizontal.style_test'
				           UpperLimit='1000'/>
				<Text Font='bold_12'
				      LocalText='[@att_n:constitution]'
				      Location='2,4'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='title'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='87,21'
				      Size='87,21'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>@att_n:constitution</Text>
				<Text Font='bold_12'
				      LocalText='xxx 0'
				      Location='90,4'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='current'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='28,21'
				      Size='28,21'
				      TextAlignment='Right'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>xxx 0</Text>
				<Text Font='bold_12'
				      LocalText='xxx 1000'
				      Location='250,3'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='target'
				      PackLocation='fff,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='49,21'
				      Size='49,21'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>xxx 1000</Text>
			</Page>
			<Page info.comp.details.visible='parent.info.comp.details.visible'
			      info.comp.pack='t'
			      Location='10,90'
			      Name='action'
			      PackSize='a,p'
			      RStyleDefault='/Styles.New.whiteOutline.rs_default'
			      ScrollExtent='299,27'
			      Selectable='true'
			      Size='299,27'>
				<Sliderbar Location='126,10'
				           Name='stat'
				           OnDisable='visible=false'
				           OnEnable='visible=true'
				           PackLocation='cfc,nfn'
				           PackSize='p,f'
				           ScrollExtent='119,13'
				           Size='119,13'
				           Style='/Styles.New.Slider.default.horizontal.style_test'
				           UpperLimit='1000'/>
				<Text Font='bold_12'
				      LocalText='[@att_n:action]'
				      Location='2,5'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='title'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='87,21'
				      Size='87,21'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>@att_n:action</Text>
				<Text Font='bold_12'
				      LocalText='xxx 0'
				      Location='90,5'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='current'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='28,21'
				      Size='28,21'
				      TextAlignment='Right'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>xxx 0</Text>
				<Text Font='bold_12'
				      LocalText='xxx 1000'
				      Location='250,3'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='target'
				      PackLocation='fff,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='49,21'
				      Size='49,21'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>xxx 1000</Text>
			</Page>
			<Page info.comp.details.visible='parent.info.comp.details.visible'
			      info.comp.pack='t'
			      Location='10,120'
			      Name='quickness'
			      PackSize='a,p'
			      RStyleDefault='/Styles.New.whiteOutline.rs_default'
			      ScrollExtent='299,27'
			      Selectable='true'
			      Size='299,27'>
				<Sliderbar Location='123,9'
				           Name='stat'
				           OnDisable='visible=false'
				           OnEnable='visible=true'
				           PackLocation='cfc,nfn'
				           PackSize='p,f'
				           ScrollExtent='122,14'
				           Size='122,14'
				           Style='/Styles.New.Slider.default.horizontal.style_test'
				           UpperLimit='1000'/>
				<Text Font='bold_12'
				      LocalText='[@att_n:quickness]'
				      Location='2,5'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='title'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='87,21'
				      Size='87,21'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>@att_n:quickness</Text>
				<Text Font='bold_12'
				      LocalText='xxx 0'
				      Location='90,5'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='current'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='28,21'
				      Size='28,21'
				      TextAlignment='Right'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>xxx 0</Text>
				<Text Font='bold_12'
				      LocalText='xxx 1000'
				      Location='250,4'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='target'
				      PackLocation='fff,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='49,21'
				      Size='49,21'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>xxx 1000</Text>
			</Page>
			<Page info.comp.details.visible='parent.info.comp.details.visible'
			      info.comp.pack='t'
			      Location='10,150'
			      Name='stamina'
			      PackSize='a,p'
			      RStyleDefault='/Styles.New.whiteOutline.rs_default'
			      ScrollExtent='299,27'
			      Selectable='true'
			      Size='299,27'>
				<Sliderbar Location='123,11'
				           Name='stat'
				           OnDisable='visible=false'
				           OnEnable='visible=true'
				           PackLocation='cfc,nfn'
				           PackSize='p,f'
				           ScrollExtent='122,14'
				           Size='122,14'
				           Style='/Styles.New.Slider.default.horizontal.style_test'
				           UpperLimit='1000'/>
				<Text Font='bold_12'
				      LocalText='[@att_n:stamina]'
				      Location='2,7'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='title'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='87,21'
				      Size='87,21'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>@att_n:stamina</Text>
				<Text Font='bold_12'
				      LocalText='xxx 0'
				      Location='90,7'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='current'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='28,21'
				      Size='28,21'
				      TextAlignment='Right'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>xxx 0</Text>
				<Text Font='bold_12'
				      LocalText='xxx 1000'
				      Location='250,6'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='target'
				      PackLocation='fff,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='49,21'
				      Size='49,21'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>xxx 1000</Text>
			</Page>
			<Page info.comp.details.visible='parent.info.comp.details.visible'
			      info.comp.pack='t'
			      Location='10,180'
			      Name='mind'
			      PackSize='a,p'
			      RStyleDefault='/Styles.New.whiteOutline.rs_default'
			      ScrollExtent='299,27'
			      Selectable='true'
			      Size='299,27'>
				<Sliderbar Location='123,11'
				           Name='stat'
				           OnDisable='visible=false'
				           OnEnable='visible=true'
				           PackLocation='cfc,nfn'
				           PackSize='p,f'
				           ScrollExtent='122,14'
				           Size='122,14'
				           Style='/Styles.New.Slider.default.horizontal.style_test'
				           UpperLimit='1000'/>
				<Text Font='bold_12'
				      LocalText='[@att_n:mind]'
				      Location='2,7'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='title'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='87,21'
				      Size='87,21'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>@att_n:mind</Text>
				<Text Font='bold_12'
				      LocalText='xxx 0'
				      Location='90,7'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='current'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='28,21'
				      Size='28,21'
				      TextAlignment='Right'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>xxx 0</Text>
				<Text Font='bold_12'
				      LocalText='xxx 1000'
				      Location='250,6'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='target'
				      PackLocation='fff,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='49,21'
				      Size='49,21'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>xxx 1000</Text>
			</Page>
			<Page info.comp.details.visible='parent.info.comp.details.visible'
			      info.comp.pack='t'
			      Location='10,210'
			      Name='focus'
			      PackSize='a,p'
			      RStyleDefault='/Styles.New.whiteOutline.rs_default'
			      ScrollExtent='299,27'
			      Selectable='true'
			      Size='299,27'>
				<Sliderbar Location='123,12'
				           Name='stat'
				           OnDisable='visible=false'
				           OnEnable='visible=true'
				           PackLocation='cfc,nfn'
				           PackSize='p,f'
				           ScrollExtent='122,14'
				           Size='122,14'
				           Style='/Styles.New.Slider.default.horizontal.style_test'
				           UpperLimit='1000'/>
				<Text Font='bold_12'
				      LocalText='[@att_n:focus]'
				      Location='2,7'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='title'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='87,21'
				      Size='87,21'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>@att_n:focus</Text>
				<Text Font='bold_12'
				      LocalText='xxx 0'
				      Location='90,7'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='current'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='28,21'
				      Size='28,21'
				      TextAlignment='Right'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>xxx 0</Text>
				<Text Font='bold_12'
				      LocalText='xxx 1000'
				      Location='250,8'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='target'
				      PackLocation='fff,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='49,21'
				      Size='49,21'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>xxx 1000</Text>
			</Page>
			<Page info.comp.details.visible='parent.info.comp.details.visible'
			      info.comp.pack='t'
			      Location='10,240'
			      Name='Willpower'
			      PackSize='a,p'
			      RStyleDefault='/Styles.New.whiteOutline.rs_default'
			      ScrollExtent='299,27'
			      Selectable='true'
			      Size='299,27'>
				<Sliderbar Location='123,11'
				           Name='stat'
				           OnDisable='visible=false'
				           OnEnable='visible=true'
				           PackLocation='cfc,nfn'
				           PackSize='p,f'
				           ScrollExtent='122,14'
				           Size='122,14'
				           Style='/Styles.New.Slider.default.horizontal.style_test'
				           UpperLimit='1000'/>
				<Text Font='bold_12'
				      LocalText='[@att_n:willpower]'
				      Location='2,7'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='title'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='87,21'
				      Size='87,21'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>@att_n:willpower</Text>
				<Text Font='bold_12'
				      LocalText='xxx 0'
				      Location='90,7'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='current'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='28,21'
				      Size='28,21'
				      TextAlignment='Right'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>xxx 0</Text>
				<Text Font='bold_12'
				      LocalText='xxx 1000'
				      Location='250,6'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='target'
				      PackLocation='fff,nfn'
				      PackSize='p,f'
				      PalText='text1'
				      ScrollExtent='49,21'
				      Size='49,21'
				      TextAlignmentVertical='Center'
				      TextColor='#96F4FC'>xxx 1000</Text>
			</Page>
		</Composite>
		<Page BackgroundOpacity='0.80'
		      BackgroundTint='#00FFFF'
		      Enabled='false'
		      Location='56,381'
		      Name='points'
		      PackLocation='cpc,fff'
		      PackSize='p,f'
		      PalBgTint='line2'
		      RStyleDefault='/Styles.New.whiteOutline.rs_default'
		      ScrollExtent='215,28'
		      Size='215,28'>
			<Text Font='bold_12'
			      LocalText='[@stat_pointsleft]'
			      Location='1,2'
			      Margin='4,0,0,0'
			      MaxLines='1'
			      MinimumSize='0,19'
			      Name='PointsLeft'
			      PackLocation='nfn,nfn'
			      PackSize='h,a'
			      PalText='header'
			      ScrollExtent='112,26'
			      Size='112,26'
			      TextAlignmentVertical='Center'
			      TextColor='#97FFFF'>@stat_pointsleft</Text>
			<Text Font='bold_12'
			      LocalText='xxx 0'
			      Location='120,3'
			      Margin='0,0,4,0'
			      MaxLines='1'
			      MinimumSize='0,19'
			      Name='Points'
			      PackLocation='fff,nfn'
			      PackSize='h,a'
			      PalText='contrast4'
			      ScrollExtent='94,25'
			      Size='94,25'
			      TextAlignment='Right'
			      TextAlignmentVertical='Center'
			      TextColor='#66FFFF'>xxx 0</Text>
			<Page BackgroundOpacity='0.30'
			      BackgroundTint='#00D6FB'
			      Enabled='false'
			      Name='outline'
			      PackLocation='nfn,nfn'
			      PackSize='a,a'
			      PalBgTint='back1'
			      RStyleDefault='/Styles.New.whitebox_palW.rs_default'
			      ScrollExtent='214,28'
			      Size='214,28'/>
		</Page>
		<Page GetsInput='false'
		      Name='bg'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      ScrollExtent='327,416'
		      Size='327,416'>
			<Page GetsInput='false'
			      Location='6,5'
			      Name='outline'
			      PackLocation='nfn,nfn'
			      PackSize='a,a'
			      ScrollExtent='316,370'
			      Selectable='true'
			      Size='316,370'>
				<Page BackgroundColor='#FFFFFF'
				      BackgroundOpacity='0.30'
				      BackgroundTint='#00D6FB'
				      Name='outline'
				      PackLocation='nfn,nfn'
				      PackSize='a,a'
				      PalBgTint='back1'
				      RStyleDefault='/Styles.New.pill_lrg.rs_default'
				      ScrollExtent='316,370'
				      Size='316,370'/>
			</Page>
			<Page BackgroundOpacity='0.90'
			      BackgroundTint='#1CFFFF'
			      Enabled='false'
			      Name='outline'
			      PackLocation='nfn,nfn'
			      PackSize='a,a'
			      PalBgTint='line1'
			      RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
			      ScrollExtent='327,416'
			      Size='327,416'/>
			<Page BackgroundColor='#FFFFFF'
			      BackgroundOpacity='0.70'
			      BackgroundTint='#01687E'
			      Location='1,1'
			      Name='inFrame'
			      PackLocation='nfn,nfn'
			      PackSize='a,a'
			      PalBgTint='back2'
			      RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
			      ScrollExtent='325,414'
			      Size='325,414'/>
		</Page>
	</Page>
	<Button DragType='uicommand'
	        IsCancelButton='true'
	        LocalText='[@cancel]'
	        Location='13,451'
	        MinimumSize='0,19'
	        Name='buttonCancel'
	        oldDetailsVisible='parent.info.comp.details.visible'
	        oldDetailsVisibleTmp='true'
	        OnPress='oldDetailsVisibleTmp=oldDetailsVisible111oldDetailsVisible=parent.info.comp.details.visible111parent.info.comp.details.visible=oldDetailsVisibleTmp111parent.info.comp.pack=t'
	        PackLocation='npn,fff'
	        PackSize='p,f'
	        ScrollExtent='112,19'
	        Size='112,19'
	        Style='/Styles.New.buttons.hud.style'>@cancel</Button>
	<Button DragType='uicommand'
	        IsDefaultButton='true'
	        LocalText='[@ok]'
	        Location='222,451'
	        MinimumSize='0,19'
	        Name='buttonOk'
	        oldDetailsVisible='true'
	        oldDetailsVisibleTmp='parent.info.comp.details.visible'
	        OnPress='oldDetailsVisibleTmp=oldDetailsVisible111oldDetailsVisible=parent.info.comp.details.visible111parent.info.comp.details.visible=oldDetailsVisibleTmp111parent.info.comp.pack=t'
	        PackLocation='fpf,fff'
	        PackSize='p,f'
	        ScrollExtent='112,19'
	        Size='112,19'
	        Style='/Styles.New.buttons.hud.style'>@ok</Button>
	<Page Name='bg'
	      PackLocation='nfn,nfn'
	      PackSize='a,a'
	      ScrollExtent='347,478'
	      Size='347,478'>
		<Page Location='316,8'
		      Name='mmc'
		      PackLocation='fff,nfn'
		      PackSize='f,f'
		      RStyleDefault='/Styles.New.thin_mmc.rs_default'
		      ScrollExtent='12,12'
		      Size='12,12'>
			<Button BackgroundColor='#FFFFFF'
			        BackgroundOpacity='0.80'
			        IsCancelButton='true'
			        Location='-3,-3'
			        Name='close'
			        PackLocation='fff,cfc'
			        PackSize='f,f'
			        ScrollExtent='16,16'
			        Size='16,16'
			        Style='/Styles.Frame.buttonClose.style'/>
		</Page>
		<Page MinimumSize='0,19'
		      Name='caption'
		      PackLocation='nfn,nfn'
		      PackSize='a,f'
		      ScrollExtent='200,19'
		      Size='200,19'>
			<Text Enabled='false'
			      Font='bold_12'
			      LocalText='[@STAT_TITLE]'
			      Margin='6,-2,0,0'
			      MaxLines='1'
			      MinimumSize='0,19'
			      Name='text'
			      PackSize='a,f'
			      PalText='titletext'
			      ScrollExtent='200,19'
			      Size='200,19'
			      TextAlignmentVertical='Center'
			      TextCapital='true'
			      TextColor='#00354F'>@stat_title</Text>
		</Page>
		<Page BackgroundTint='#00D6FB'
		      GetsInput='false'
		      Location='1,0'
		      Name='frame'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      PalBgTint='baselight'
		      RStyleDefault='/Styles.New.thin_in.rs_default'
		      ScrollExtent='346,478'
		      Selectable='true'
		      Size='346,478'>
			<Page BackgroundColor='#FFFFFF'
			      GetsInput='false'
			      Location='1,0'
			      Name='lines'
			      PackSize='a,a'
			      RStyleDefault='/Styles.space.boxes.generic4.rs_default'
			      ScrollExtent='346,478'
			      Size='346,478'>
				<Page BackgroundColor='#FFFFFF'
				      GetsInput='false'
				      Location='0,456'
				      Name='outlineBL'
				      OpacityRelativeMin='0.80'
				      PackLocation='nfn,fff'
				      PackSize='p,f'
				      ScrollExtent='272,22'
				      Size='272,22'>
					
				</Page>
				<Page BackgroundColor='#FFFFFF'
				      GetsInput='false'
				      Location='95,456'
				      Name='outlineBR'
				      OpacityRelativeMin='0.80'
				      PackLocation='fff,fff'
				      PackSize='p,f'
				      RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
				      ScrollExtent='251,22'
				      Size='251,22'>
					
				</Page>
				<Page BackgroundColor='#FFFFFF'
				      GetsInput='false'
				      Location='95,0'
				      Name='outlineTR'
				      OpacityRelativeMin='0.80'
				      PackLocation='fff,nfn'
				      PackSize='p,f'
				      ScrollExtent='251,22'
				      Size='251,22'>
					
				</Page>
				<Page BackgroundColor='#FFFFFF'
				      GetsInput='false'
				      Name='outlineTL'
				      OpacityRelativeMin='0.80'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
				      ScrollExtent='272,22'
				      Size='272,22'>
					
				</Page>
			</Page>
			
		</Page>
		<Page BackgroundOpacity='1.00'
		      BackgroundTint='#00D6FB'
		      GetsInput='false'
		      Location='0,5'
		      Name='back'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      PalBgTint='back1'
		      RStyleDefault='/Styles.New.thin_in.rs_default'
		      ScrollExtent='347,470'
		      Selectable='true'
		      Size='347,470'/>
		<Page BackgroundOpacity='1.00'
		      BackgroundTint='#00D6FB'
		      GetsInput='false'
		      Name='back'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      PalBgTint='back1'
		      RStyleDefault='/Styles.space.spaceglow.rs_default'
		      ScrollExtent='347,478'
		      Selectable='true'
		      Size='347,478'/>
	</Page>
</Page>