<Page BackgroundOpacity='0.50'
      Name='Loc'
      PackSize='1,1'
      ScrollExtent='1024,768'
      Size='1024,768'
      Visible='false'
      VisualEditLock='true'>
	<Data cancelbutton='menu.CancelButton'
	      locationsvolumepage='menu.window.locations.inner.volumepage'
	      Name='CodeData'
	      okbutton='menu.OkButton'
	      planetsvolumepage='menu.window.planets.inner.volumepage'
	      sample='menu.window.sample'/>
	<Page Location='327,136'
	      MinimumSize='288,291'
	      Name='menu'
	      PackLocation='cfc,cfc'
	      PackSize='p,p'
	      RStyleDefault='rs_default'
	      ScrollExtent='331,370'
	      Size='331,370'
	      UserMovable='true'
	      UserResizable='true'>
		<Button IsDefaultButton='true'
		        LocalText='[@ok]'
		        Location='210,343'
		        MinimumSize='0,19'
		        Name='OkButton'
		        PackLocation='fff,fff'
		        PackSize='p,f'
		        ScrollExtent='105,19'
		        Size='105,19'
		        Style='/Styles.New.buttons.hud.style'>@ok</Button>
		<Button IsCancelButton='true'
		        LocalText='[@cancel]'
		        Location='16,343'
		        MinimumSize='0,19'
		        Name='CancelButton'
		        PackLocation='nfn,fff'
		        PackSize='p,f'
		        ScrollExtent='105,19'
		        Size='105,19'
		        Style='/Styles.New.buttons.hud.style'>@cancel</Button>
		<Page BackgroundColor='#FFFFFF'
		      Location='10,24'
		      Name='window'
		      PackSize='a,a'
		      RStyleDefault='rs_default'
		      ScrollExtent='312,314'
		      Size='312,314'>
			<Text Font='bold_12'
			      LocalText='Planets'
			      Location='7,25'
			      MinimumSize='79,24'
			      Name='Sample'
			      PackLocation='nfn,nfn'
			      PackSize='p,f'
			      PalText='text1'
			      ScrollExtent='130,24'
			      Selectable='true'
			      Size='130,24'
			      TextAlignment='Center'
			      TextColor='#96F4FC'>Planets</Text>
			<Page BackgroundColor='#FFFFFF'
			      Name='Planets'
			      PackSize='h,a'
			      ScrollExtent='152,314'
			      Size='152,314'>
				<Page BackgroundColor='#FFFFFF'
				      Location='-1,28'
				      Name='inner'
				      PackSize='a,a'
				      ScrollExtent='150,286'
				      Selectable='true'
				      Size='150,286'>
					<Scrollbar Control='VolumePage'
					           Enabled='false'
					           Location='137,-1'
					           Name='Scrollbar'
					           PackLocation='fff,nfn'
					           PackSize='f,a'
					           ScrollExtent='11,281'
					           Size='11,281'
					           Style='/Styles.scrollbar.default.vHud4.style'/>
					<VolumePage CellCountFixed='1,0'
					            CellPadding='8,4'
					            CellSize='113,24'
					            Location='8,1'
					            MinimumScrollExtent='8,4'
					            MultiSelection='false'
					            Name='VolumePage'
					            PackSize='a,a'
					            RStyleDefault='rs_default'
					            ScrollExtent='129,276'
					            Selectable='true'
					            Size='129,276'/>
				</Page>
				<Page GetsInput='false'
				      Location='0,20'
				      Name='outline'
				      PackLocation='nfn,nfn'
				      PackSize='a,a'
				      ScrollExtent='151,294'
				      Selectable='true'
				      Size='151,294'>
					<Page BackgroundColor='#FFFFFF'
					      BackgroundOpacity='1.00'
					      BackgroundTint='#1CFFFF'
					      Name='outline'
					      PackLocation='nfn,nfn'
					      PackSize='a,a'
					      PalBgTint='line1'
					      RStyleDefault='/Styles.New.whiteOutline.rs_default'
					      ScrollExtent='151,294'
					      Size='151,294'/>
					<Page BackgroundColor='#FFFFFF'
					      BackgroundOpacity='0.40'
					      BackgroundTint='#00D6FB'
					      Location='7,9'
					      Name='box'
					      PackLocation='nfn,nfn'
					      PackSize='a,a'
					      PalBgTint='back1'
					      RStyleDefault='/Styles.New.whitebox_palW.rs_default'
					      ScrollExtent='126,276'
					      Size='126,276'/>
					<Page BackgroundColor='#FFFFFF'
					      BackgroundOpacity='0.60'
					      BackgroundTint='#00D6FB'
					      Location='1,2'
					      Name='inFrame'
					      PackLocation='nfn,nfn'
					      PackSize='a,a'
					      PalBgTint='back1'
					      RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
					      ScrollExtent='149,291'
					      Size='149,291'/>
				</Page>
				<Text BackgroundTint='#FF8000'
				      Font='bold_12'
				      LocalText='[@loc_planets]'
				      MinimumSize='0,19'
				      Name='Label'
				      PackSize='a,f'
				      PalText='header'
				      RStyleDefault='rs_default'
				      ScrollExtent='152,23'
				      Size='152,23'
				      TextColor='#97FFFF'>@loc_planets</Text>
			</Page>
			<Page BackgroundColor='#FFFFFF'
			      Location='160,0'
			      Name='Locations'
			      PackLocation='fff'
			      PackSize='h,a'
			      RStyleDefault='style'
			      ScrollExtent='152,314'
			      Size='152,314'>
				<Page BackgroundColor='#FFFFFF'
				      Location='0,28'
				      Name='inner'
				      PackSize='a,a'
				      ScrollExtent='152,286'
				      Selectable='true'
				      Size='152,286'>
					<Scrollbar Control='VolumePage'
					           Enabled='false'
					           Location='137,-1'
					           Name='Scrollbar'
					           PackLocation='fff,nfn'
					           PackSize='f,a'
					           ScrollExtent='11,281'
					           Size='11,281'
					           Style='/Styles.scrollbar.default.vHud4.style'/>
					<VolumePage CellCountFixed='1,0'
					            CellPadding='8,4'
					            CellSize='113,24'
					            Location='6,1'
					            MinimumScrollExtent='8,4'
					            MultiSelection='false'
					            Name='VolumePage'
					            PackSize='a,a'
					            RStyleDefault='rs_default'
					            ScrollExtent='129,276'
					            Selectable='true'
					            Size='129,276'/>
				</Page>
				<Page GetsInput='false'
				      Location='0,20'
				      Name='outline'
				      PackLocation='nfn,nfn'
				      PackSize='a,a'
				      ScrollExtent='152,294'
				      Selectable='true'
				      Size='152,294'>
					<Page BackgroundColor='#FFFFFF'
					      BackgroundOpacity='1.00'
					      BackgroundTint='#1CFFFF'
					      Name='outline'
					      PackLocation='nfn,nfn'
					      PackSize='a,a'
					      PalBgTint='line1'
					      RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
					      ScrollExtent='152,294'
					      Size='152,294'/>
					<Page BackgroundColor='#FFFFFF'
					      BackgroundOpacity='0.40'
					      BackgroundTint='#00D6FB'
					      Location='7,9'
					      Name='box'
					      PackLocation='nfn,nfn'
					      PackSize='a,a'
					      PalBgTint='back1'
					      RStyleDefault='/Styles.New.whitebox_palW.rs_default'
					      ScrollExtent='127,276'
					      Size='127,276'/>
					<Page BackgroundColor='#FFFFFF'
					      BackgroundOpacity='0.60'
					      BackgroundTint='#00D6FB'
					      Location='1,2'
					      Name='inFrame'
					      PackLocation='nfn,nfn'
					      PackSize='a,a'
					      PalBgTint='back1'
					      RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
					      ScrollExtent='150,291'
					      Size='150,291'/>
				</Page>
				<Text Font='bold_12'
				      LocalText='[@loc_locations]'
				      MinimumSize='0,19'
				      Name='Label'
				      PackSize='a,f'
				      PalText='header'
				      ScrollExtent='152,23'
				      Size='152,23'
				      TextColor='#97FFFF'>@loc_locations</Text>
			</Page>
		</Page>
		<Page Name='bg'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      ScrollExtent='331,370'
		      Size='331,370'>
			<Page Location='300,8'
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
			      ScrollExtent='184,19'
			      Size='184,19'>
				<Text Enabled='false'
				      Font='bold_12'
				      LocalText='[@CPT_LOCATIONS]'
				      Margin='6,-2,0,0'
				      MaxLines='1'
				      MinimumSize='0,19'
				      Name='text'
				      PackSize='a,f'
				      PalText='titletext'
				      ScrollExtent='184,19'
				      Size='184,19'
				      TextAlignmentVertical='Center'
				      TextCapital='true'
				      TextColor='#00354F'>@cpt_locations</Text>
			</Page>
			<Page BackgroundTint='#00D6FB'
			      GetsInput='false'
			      Name='frame'
			      PackLocation='nfn,nfn'
			      PackSize='a,a'
			      PalBgTint='baselight'
			      RStyleDefault='/Styles.New.thin_in.rs_default'
			      ScrollExtent='331,370'
			      Selectable='true'
			      Size='331,370'>
				<Page BackgroundColor='#FFFFFF'
				      GetsInput='false'
				      Location='1,0'
				      Name='lines'
				      PackSize='a,a'
				      RStyleDefault='/Styles.space.boxes.generic4.rs_default'
				      ScrollExtent='331,370'
				      Size='331,370'>
					<Page BackgroundColor='#FFFFFF'
					      GetsInput='false'
					      Location='0,348'
					      Name='outlineBL'
					      OpacityRelativeMin='0.80'
					      PackLocation='nfn,fff'
					      PackSize='p,f'
					      ScrollExtent='260,22'
					      Size='260,22'>

					</Page>
					<Page BackgroundColor='#FFFFFF'
					      GetsInput='false'
					      Location='91,348'
					      Name='outlineBR'
					      OpacityRelativeMin='0.80'
					      PackLocation='fff,fff'
					      PackSize='p,f'
					      RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
					      ScrollExtent='240,22'
					      Size='240,22'>

					</Page>
					<Page BackgroundColor='#FFFFFF'
					      GetsInput='false'
					      Location='91,0'
					      Name='outlineTR'
					      OpacityRelativeMin='0.80'
					      PackLocation='fff,nfn'
					      PackSize='p,f'
					      ScrollExtent='240,22'
					      Size='240,22'>

					</Page>
					<Page BackgroundColor='#FFFFFF'
					      GetsInput='false'
					      Name='outlineTL'
					      OpacityRelativeMin='0.80'
					      PackLocation='nfn,nfn'
					      PackSize='p,f'
					      RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
					      ScrollExtent='260,22'
					      Size='260,22'>

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
			      ScrollExtent='331,362'
			      Selectable='true'
			      Size='331,362'/>
			<Page BackgroundOpacity='1.00'
			      BackgroundTint='#00D6FB'
			      GetsInput='false'
			      Name='back'
			      PackLocation='nfn,nfn'
			      PackSize='a,a'
			      PalBgTint='back1'
			      RStyleDefault='/Styles.space.spaceglow.rs_default'
			      ScrollExtent='331,370'
			      Selectable='true'
			      Size='331,370'/>
		</Page>
	</Page>
</Page>