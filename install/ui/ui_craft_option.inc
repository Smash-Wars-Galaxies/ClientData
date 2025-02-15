<Page Location='349,269'
      MaximumSize='475,183'
      MinimumSize='246,183'
      Name='option'
      ScrollExtent='332,183'
      Size='332,183'
      UserMovable='true'
      UserResizable='true'
      Visible='false'>
	<Data buttonclose='bg.mmc.close'
	      buttonexperiment='completion.buttonExperiment'
	      buttonprototype='completion.buttonPrototype'
	      buttonschematic='completion.buttonSchematic'
	      checkPopUpHelp='top.checkShowHelp'
	      Name='CodeData'/>
	<Text Font='bold_12'
	      LocalText='[@ui_craft:cpt_crafting_completion]'
	      Location='26,44'
	      Margin='2,2,2,2'
	      MaxLines='1'
	      MinimumSize='0,19'
	      Name='label'
	      PackLocation='nfn,nfn'
	      PackSize='p,f'
	      PalText='header'
	      RStyleDefault='rs_default'
	      ScrollExtent='281,19'
	      Size='281,19'
	      TextAlignment='Center'
	      TextColor='#97FFFF'>@ui_craft:cpt_crafting_completion</Text>

	<Composite Location='10,8'
	           Name='top'
	           Orientation='Horizontal'
	           PackLocation='nfn,nfn'
	           PackSize='a,f'
	           ScrollExtent='304,32'
	           Size='304,32'>
		<Text BackgroundColor='#FFFFFF'
		      Font='bold_12'
		      LocalText='[@ui_craft:cpt_option_help]'
		      Location='0,13'
		      MaxLines='1'
		      MinimumSize='0,19'
		      Name='helpCaption'
		      PackLocation='nfn,fff'
		      PackSize='f,f'
		      PalText='header'
		      RStyleDefault='rs_default'
		      ScrollExtent='144,19'
		      Size='144,19'
		      TextColor='#97FFFF'>@ui_craft:cpt_option_help</Text>

	</Composite>
	<Page Location='13,64'
	      Name='completion'
	      PackLocation='nfn,nfn'
	      PackSize='a,a'
	      ScrollExtent='304,106'
	      Selectable='true'
	      Size='304,106'>
		<Button IsDefaultButton='true'
		        LocalText='[@ui_craft:exp]'
		        Location='23,15'
		        MinimumSize='0,19'
		        Name='buttonExperiment'
		        PackLocation='cpc,cpc'
		        PackSize='p,f'
		        RStyleDefault='/top_Buttons.roundButtonLarge.style'
		        ScrollExtent='258,19'
		        Size='258,19'
		        Style='/Styles.New.buttons.hud.style'>@ui_craft:exp</Button>
		<Button IsDefaultButton='true'
		        LocalText='[@ui_craft:create_prototype]'
		        Location='23,41'
		        MinimumSize='0,19'
		        Name='buttonPrototype'
		        PackLocation='cpc,cpc'
		        PackSize='p,f'
		        RStyleDefault='/top_Buttons.roundButtonLarge.style'
		        ScrollExtent='258,19'
		        Size='258,19'
		        Style='/Styles.New.buttons.hud.style'>@ui_craft:create_prototype</Button>
		<Button LocalText='[@ui_craft:create_manf_schem]'
		        Location='23,69'
		        MinimumSize='0,19'
		        Name='buttonSchematic'
		        PackLocation='cpc,cpc'
		        PackSize='p,f'
		        RStyleDefault='/top_Buttons.roundButtonLarge.style'
		        ScrollExtent='258,19'
		        Size='258,19'
		        Style='/Styles.New.buttons.hud.style'>@ui_craft:create_manf_schem</Button>
		<Page BackgroundColor='#FFFFFF'
		      BackgroundOpacity='0.80'
		      BackgroundTint='#1CFFFF'
		      Name='outline'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      PalBgTint='line1'
		      RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
		      ScrollExtent='304,106'
		      Size='304,106'/>
		<Page BackgroundColor='#FFFFFF'
		      BackgroundOpacity='0.70'
		      BackgroundTint='#00D6FB'
		      Name='inFrame'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      PalBgTint='back1'
		      RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
		      ScrollExtent='304,106'
		      Size='304,106'/>
	</Page>
	<Page Name='bg'
	      PackLocation='nfn,nfn'
	      PackSize='a,a'
	      ScrollExtent='332,183'
	      Size='332,183'>
		<Page Location='301,8'
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
		      ScrollExtent='190,19'
		      Size='190,19'>
			<Text Enabled='false'
			      Font='bold_12'
			      LocalText='[@UI_CRAFT:CPT_OPTION]'
			      Margin='6,-2,0,0'
			      MaxLines='1'
			      MinimumSize='0,19'
			      Name='label'
			      OpacityRelativeMin='0.70'
			      PackLocation='nfn,nfn'
			      PackSize='a,f'
			      PalText='titletext'
			      ScrollExtent='123,19'
			      Size='123,19'
			      TextAlignmentVertical='Center'
			      TextCapital='true'
			      TextColor='#00354F'>@ui_craft:cpt_option</Text>
			<Text Enabled='false'
			      Font='bold_12'
			      LocalText='STEP 4/6'
			      Location='118,0'
			      Margin='6,-2,0,0'
			      MaxLines='1'
			      MinimumSize='0,19'
			      Name='text'
			      OpacityRelativeMin='0.70'
			      PackLocation='fff,nfn'
			      PackSize='f,f'
			      PalText='titletext'
			      ScrollExtent='72,19'
			      Size='72,19'
			      TextAlignmentVertical='Center'
			      TextCapital='true'
			      TextColor='#00354F'>STEP 4/6</Text>
		</Page>
		<Page BackgroundTint='#00D6FB'
		      GetsInput='false'
		      Location='1,0'
		      Name='frame'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      PalBgTint='baselight'
		      RStyleDefault='/Styles.New.thin_in.rs_default'
		      ScrollExtent='331,183'
		      Selectable='true'
		      Size='331,183'>
			<Page BackgroundColor='#FFFFFF'
			      GetsInput='false'
			      Location='1,0'
			      Name='lines'
			      PackSize='a,a'
			      RStyleDefault='/Styles.space.boxes.generic4.rs_default'
			      ScrollExtent='331,183'
			      Size='331,183'>
				<Page BackgroundColor='#FFFFFF'
				      GetsInput='false'
				      Location='0,161'
				      Name='outlineBL'
				      OpacityRelativeMin='0.80'
				      PackLocation='nfn,fff'
				      PackSize='p,f'
				      ScrollExtent='261,22'
				      Size='261,22'>

				</Page>
				<Page BackgroundColor='#FFFFFF'
				      GetsInput='false'
				      Location='89,161'
				      Name='outlineBR'
				      OpacityRelativeMin='0.80'
				      PackLocation='fff,fff'
				      PackSize='p,f'
				      RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
				      ScrollExtent='242,22'
				      Size='242,22'>

				</Page>
				<Page BackgroundColor='#FFFFFF'
				      GetsInput='false'
				      Location='89,0'
				      Name='outlineTR'
				      OpacityRelativeMin='0.80'
				      PackLocation='fff,nfn'
				      PackSize='p,f'
				      ScrollExtent='242,22'
				      Size='242,22'>

				</Page>
				<Page BackgroundColor='#FFFFFF'
				      GetsInput='false'
				      Name='outlineTL'
				      OpacityRelativeMin='0.80'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
				      ScrollExtent='261,22'
				      Size='261,22'>

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
		      ScrollExtent='332,175'
		      Selectable='true'
		      Size='332,175'/>
		<Page BackgroundOpacity='1.00'
		      BackgroundTint='#00D6FB'
		      GetsInput='false'
		      Name='back'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      PalBgTint='back1'
		      RStyleDefault='/Styles.space.spaceglow.rs_default'
		      ScrollExtent='332,183'
		      Selectable='true'
		      Size='332,183'/>
	</Page>
</Page>