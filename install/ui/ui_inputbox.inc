<Page Location='332,271'
      Name='inputBox'
      ScrollExtent='347,219'
      Size='347,219'
      UserMovable='true'
      UserResizable='true'
      Visible='false'>
	<Data buttonclose='bg.mmc.close'
	      buttonNo='btncancel'
	      buttonYes='btnok'
	      Name='CodeData'
	      question='prompt.lblprompt'
	      Text='txtInput'
	      widgetToFocus='txtInput'/>
	<Page BackgroundOpacity='0.90'
	      BackgroundTint='#1CFFFF'
	      Location='12,30'
	      Name='Prompt'
	      PackLocation='nfn,nfn'
	      PackSize='a,a'
	      PalBgTint='line1'
	      RStyleDefault='/Styles.New.whiteOutline.rs_default'
	      ScrollExtent='327,109'
	      Size='327,109'>
		<Scrollbar Control='lblPrompt'
		           Enabled='false'
		           Location='313,5'
		           Name='vScroll'
		           PackLocation='fff'
		           PackSize='f,a'
		           ScrollExtent='11,97'
		           Size='11,97'
		           Style='/Styles.scrollbar.default.vHud4.style'/>
		<Text Enabled='false'
		      Font='bold_12'
		      LocalText='lblPrompt'
		      Location='8,6'
		      MaxLines='20'
		      Name='lblPrompt'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      PalText='text1'
		      RStyleDefault='rs_default'
		      ScrollExtent='305,96'
		      Size='305,96'
		      TextColor='#96F4FC'>lblPrompt</Text>
		<Page BackgroundColor='#FFFFFF'
		      BackgroundOpacity='0.50'
		      BackgroundTint='#01687E'
		      Enabled='false'
		      Location='4,6'
		      Name='box'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      PalBgTint='back2'
		      RStyleDefault='/Styles.New.whitebox_palW.rs_default'
		      ScrollExtent='308,98'
		      Size='308,98'/>
	</Page>
	<Textbox BackgroundOpacity='0.80'
	         BackgroundTint='#1CFFFF'
	         Cursor='.'
	         Location='12,147'
	         MinimumSize='0,19'
	         Name='txtInput'
	         PackLocation='nfn,fff'
	         PackSize='a,f'
	         PalBgTint='line1'
	         RStyleDefault='/Styles.New.whiteOutline.rs_default'
	         ScrollExtent='325,37'
	         Size='325,37'
	         Style='/Styles.textbox.default.Style_12'
	         TextColor='#000000'/>
	<Button IsCancelButton='true'
	        LocalText='[@cancel]'
	        Location='16,192'
	        MinimumSize='0,19'
	        Name='btnCancel'
	        PackLocation='nfn,fff'
	        PackSize='p,f'
	        ScrollExtent='108,19'
	        Size='108,19'
	        Style='/Styles.New.buttons.hud.style'
	        TextColor='#000000'>@cancel</Button>
	<Button IsDefaultButton='true'
	        LocalText='[@ok]'
	        Location='223,192'
	        MinimumSize='0,19'
	        Name='btnOk'
	        PackLocation='fff,fff'
	        PackSize='p,f'
	        ScrollExtent='108,19'
	        Size='108,19'
	        Style='/Styles.New.buttons.hud.style'
	        TextColor='#000000'>@ok</Button>
	<Page BackgroundColor='#FFFFFF'
	      BackgroundOpacity='0.50'
	      BackgroundTint='#01687E'
	      Enabled='false'
	      Location='15,150'
	      Name='boxInput'
	      PackLocation='nfn,fff'
	      PackSize='a,f'
	      PalBgTint='back2'
	      RStyleDefault='/Styles.New.whitebox_palW.rs_default'
	      ScrollExtent='320,31'
	      Size='320,31'/>
	<Page Name='bg'
	      PackLocation='nfn,nfn'
	      PackSize='a,a'
	      ScrollExtent='347,219'
	      Size='347,219'>
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
			      LocalText='INPUT BOX'
			      Margin='6,-2,0,0'
			      MaxLines='1'
			      MinimumSize='0,19'
			      Name='lblTitle'
			      PackSize='a,f'
			      PalText='titletext'
			      ScrollExtent='200,19'
			      Size='200,19'
			      TextAlignmentVertical='Center'
			      TextCapital='true'
			      TextColor='#00354F'>Input Box</Text>
		</Page>
		<Page BackgroundTint='#00D6FB'
		      GetsInput='false'
		      Location='1,0'
		      Name='frame'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      PalBgTint='baselight'
		      RStyleDefault='/Styles.New.thin_in.rs_default'
		      ScrollExtent='346,219'
		      Selectable='true'
		      Size='346,219'>
			<Page BackgroundColor='#FFFFFF'
			      GetsInput='false'
			      Location='1,0'
			      Name='lines'
			      PackSize='a,a'
			      RStyleDefault='/Styles.space.boxes.generic4.rs_default'
			      ScrollExtent='346,219'
			      Size='346,219'>
				<Page BackgroundColor='#FFFFFF'
				      GetsInput='false'
				      Location='0,197'
				      Name='outlineBL'
				      OpacityRelativeMin='0.80'
				      PackLocation='nfn,fff'
				      PackSize='p,f'
				      ScrollExtent='272,22'
				      Size='272,22'>

				</Page>
				<Page BackgroundColor='#FFFFFF'
				      GetsInput='false'
				      Location='95,197'
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
		      ScrollExtent='347,211'
		      Selectable='true'
		      Size='347,211'/>
		<Page BackgroundOpacity='0.80'
		      BackgroundTint='#00D6FB'
		      GetsInput='false'
		      Name='back'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      PalBgTint='back1'
		      RStyleDefault='/Styles.space.spaceglow.rs_default'
		      ScrollExtent='347,219'
		      Selectable='true'
		      Size='347,219'/>
	</Page>
</Page>