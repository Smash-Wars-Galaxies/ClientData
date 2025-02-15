<Page Location='490,172'
      MinimumSize='326,326'
      Name='PMBrowser'
      OnDisableEffector='/Effectors.FadeThreeQuarter'
      OnEnableEffector='/Effectors.FadeFull'
      RStyleDefault='rs_default'
      ScrollExtent='514,428'
      Size='514,428'
      UserMovable='true'
      UserResizable='true'
      Visible='false'>
	<Data buttonclose='bg.mmc.close'
	      buttondelete='bottom.buttonDelete'
	      buttonForward='bottom.buttonForward'
	      buttonnew='bottom.buttonNew'
	      buttonOk='buttonOk'
	      buttonReply='bottom.buttonReply'
	      Name='CodeData'
	      Table='pagetable.table'
	      textbody='bottom.comp.body.text'
	      volumeAttach='bottom.comp.attach.volume'/>

	<Button LocalText='[@ui_pm:close]'
	        Location='302,402'
	        Name='buttonOk'
	        PackLocation='fff,fff'
	        PackSize='p,f'
	        RStyleDefault='/Styles.New.buttons.hud.style'
	        ScrollExtent='196,16'
	        Size='196,16'
	        Style='/Styles.New.buttons.hud.style'
	        TextColor='#000000'>@ui_pm:close</Button>
	<Page Location='9,28'
	      MinimumSize='291,128'
	      Name='pageTable'
	      PackLocation='nfn,nfn'
	      PackSize='a,h'
	      RStyleDefault='rs_default'
	      ScrollExtent='497,201'
	      Selectable='true'
	      Size='497,201'>
		<TableHeader BackgroundColor='#FFFFFF'
		             BackgroundOpacity='0.00'
		             ButtonStyle='/Styles.New.buttons.newInFrame2.style'
		             CursorResize='/Styles.Cursors.resizeHoriz'
		             Location='7,5'
		             MinimumScrollExtent='475,0'
		             Name='header'
		             PackLocation='nfn,nfn'
		             PackSize='a,f'
		             ScrollExtent='476,17'
		             Size='476,17'
		             Table='table'/>
		<Table BackgroundColor='#000000'
		       BackgroundOpacity='0.20'
		       BackgroundTint='#00D6FB'
		       CellPadding='5,3'
		       ColumnSizeDataSource='dsColSizes'
		       DefaultTextColor='#96F4FC'
		       DefaultTextStyle='bold_12'
		       GridColorHorizontal='#1CFFFF'
		       GridColorVertical='#1CFFFF'
		       Location='7,26'
		       MinimumScrollExtent='475,57'
		       Name='table'
		       PackLocation='nfn,nfn'
		       PackSize='a,a'
		       PalBgTint='back1'
		       PalGridH='line1'
		       PalGridV='line1'
		       PalSelectedText='listtext'
		       PalSelectionBg='listback'
		       PalSelectionRect='listline'
		       PalText='text1'
		       RStyleDefault='/Styles.New.pill_lrg.rs_default'
		       ScrollExtent='475,164'
		       SelectionColorBackground='#35CBD7'
		       SelectionColorRect='#37FD06'
		       SelectionTextColor='#003842'
		       Size='475,164'
		       TableModel='model'/>
		<DataSource Name='dsColSizes'>
			<Data Constant='true'
			      Proportion='0.07'
			      Width='41'/>
			<Data Constant='false'
			      Proportion='0.49'
			      Width='156'/>
			<Data Constant='false'
			      Proportion='0.51'
			      Width='160'/>
			<Data Constant='true'
			      Proportion='0.23'
			      Width='96'/>
		</DataSource>
		<Scrollbar Control='table'
		           Enabled='false'
		           Location='483,21'
		           Name='scrolltable'
		           PackLocation='fff,nfn'
		           PackSize='f,a'
		           ScrollExtent='11,176'
		           Size='11,176'
		           Style='/Styles.scrollbar.default.vHud4.style'/>
		<DataSourceContainer Name='containerall'>
			<DataSource Label='@ui_pm:table_status'
			            Name='status'
			            Type='text'>
				<Data Name='stamina'
				      Value='xxx n'/>
				<Data Name='mind'
				      Value='xxx u'/>
				<Data Name='focus'
				      Value='xxx r'/>
			</DataSource>
			<DataSource Label='@ui_pm:table_sender'
			            Name='sender'
			            Type='text'>
				<Data Name='stamina'
				      Value='xxx sender here'/>
				<Data Name='mind'
				      Value='xxx sender here'/>
				<Data Name='focus'
				      Value='xxx sender here'/>
			</DataSource>
			<DataSource Label='@ui_pm:table_subject'
			            Name='subject'
			            Type='text'>
				<Data Name='Mind'
				      Value='40'/>
				<Data Name='Focus'
				      Value='30'/>
				<Data Name='Willpower'
				      Value='20'/>
			</DataSource>
			<DataSource Label='@ui_pm:table_date'
			            Name='date'
			            Type='text'>
				<Data Name='Mind'
				      Value='xxx date here'/>
				<Data Name='Focus'
				      Value='xxx date here'/>
				<Data Name='Willpower'
				      Value='xxx date here'/>
			</DataSource>
		</DataSourceContainer>
		<TableModelDefault DataSourceContainer='containerall'
		                   Name='model'/>
		<Page BackgroundColor='#FFFFFF'
		      BackgroundTint='#00FFFF'
		      Name='bg_table'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      PalBgTint='outline1'
		      ScrollExtent='497,201'
		      Size='497,201'>
			<Page BackgroundOpacity='0.90'
			      BackgroundTint='#1CFFFF'
			      GetsInput='false'
			      Name='outline'
			      PackLocation='nfn,nfn'
			      PackSize='a,a'
			      PalBgTint='line1'
			      RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
			      ScrollExtent='497,201'
			      Size='497,201'/>
			<Page BackgroundColor='#FFFFFF'
			      BackgroundOpacity='0.60'
			      BackgroundTint='#00D6FB'
			      Location='0,4'
			      Name='inFrame'
			      PackLocation='nfn,nfn'
			      PackSize='a,a'
			      PalBgTint='back1'
			      RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
			      ScrollExtent='494,197'
			      Size='494,197'/>
		</Page>
	</Page>
	<Page Location='9,230'
	      Name='bottom'
	      PackLocation='nfn,fff'
	      PackSize='a,h'
	      RStyleDefault='rs_default'
	      ScrollExtent='497,165'
	      Selectable='true'
	      Size='497,165'>
		<Composite Location='6,9'
		           Name='comp'
		           Orientation='Horizontal'
		           PackSize='a,a'
		           ScrollExtent='487,110'
		           Size='487,110'
		           Spacing='8'
		           SpacingType='Fill'>
			<Page Name='body'
			      PackSize='f,a'
			      ScrollExtent='367,109'
			      Size='367,109'>
				<Text BackgroundColor='#FFFFFF'
				      BackgroundScrolls='false'
				      CursorMark='33'
				      CursorPoint='33'
				      Font='default_12'
				      GetsInput='true'
				      LocalText='xxx1LINE ONE1LINE TWO1LINE THREE1LINE FOUR1LINE FIVE1LINE SIX1LINE SEVEN1LINE EIGHT1LINE NINE1LINE TEN1LINE ELEVEN1'
				      Location='6,7'
				      Margin='2,2,2,2'
				      Name='text'
				      PackSize='a,a'
				      PalText='text1'
				      RStyleDefault='/Styles.New.whitebox.rs_default'
				      ScrollExtent='342,173'
				      Size='342,98'
				      TextColor='#96F4FC'>xxx111LINE ONE111LINE TWO111LINE THREE111LINE FOUR111LINE FIVE111LINE SIX111LINE SEVEN111LINE EIGHT111LINE NINE111LINE TEN111LINE ELEVEN111</Text>
				<Scrollbar AutoVisibility='true'
				           Control='text'
				           Location='353,6'
				           Name='Scroll'
				           PackLocation='fff,nfn'
				           PackSize='f,a'
				           ScrollExtent='11,98'
				           Size='11,98'
				           Style='/Styles.scrollbar.default.vHud4.style'/>
				<Page BackgroundOpacity='0.70'
				      BackgroundTint='#00FFFF'
				      GetsInput='false'
				      Name='outline'
				      PackLocation='nfn,nfn'
				      PackSize='a,a'
				      PalBgTint='line2'
				      RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
				      ScrollExtent='367,109'
				      Size='367,109'/>
				<Page BackgroundColor='#FFFFFF'
				      BackgroundOpacity='0.70'
				      BackgroundTint='#03546B'
				      Location='4,6'
				      Name='box'
				      PackLocation='nfn,nfn'
				      PackSize='a,a'
				      PalBgTint='back3'
				      RStyleDefault='/Styles.New.whitebox_palW.rs_default'
				      ScrollExtent='348,101'
				      Size='348,101'/>
			</Page>
			<Page Location='375,0'
			      MaximumSize='112,16384'
			      MinimumSize='112,0'
			      Name='attach'
			      OnHide='parent.pack=t'
			      OnShow='parent.pack=t'
			      PackSize='f,a'
			      ScrollExtent='112,109'
			      Size='112,109'>
				<VolumePage BackgroundScrolls='false'
				            CellCount='1,2'
				            CellSize='64,64'
				            Location='5,18'
				            MinimumScrollExtent='68,134'
				            Name='volume'
				            OnHide='parent.visible=visible'
				            OnShow='parent.visible=visible'
				            PackSize='a,a'
				            RStyleDefault='/Styles.New.whitebox.rs_default'
				            ScrollExtent='92,134'
				            Size='92,83'>
					<Text BackgroundColor='#FFFFFF'
					      BackgroundTint='#008080'
					      Enabled='false'
					      Font='bold_12'
					      LocalText='xxx1LINE ONE1LINE TWO1LINE THREE1LINE FOUR1LINE FIVE1LINE SIX1LINE SEVEN1LINE EIGHT1LINE NINE1LINE TEN1LINE ELEVEN1'
					      Location='2,2'
					      Margin='2,2,2,2'
					      MaximumSize='64,64'
					      MinimumSize='64,64'
					      Name='text'
					      PalText='text1'
					      RStyleDefault='rs_default'
					      ScrollExtent='64,172'
					      Size='64,64'
					      TextColor='#96F4FC'>xxx111LINE ONE111LINE TWO111LINE THREE111LINE FOUR111LINE FIVE111LINE SIX111LINE SEVEN111LINE EIGHT111LINE NINE111LINE TEN111LINE ELEVEN111</Text>
					<Text BackgroundColor='#FFFFFF'
					      BackgroundTint='#008080'
					      Enabled='false'
					      Font='bold_12'
					      LocalText='xxx1LINE ONE1LINE TWO1LINE THREE1LINE FOUR1LINE FIVE1LINE SIX1LINE SEVEN1LINE EIGHT1LINE NINE1LINE TEN1LINE ELEVEN1'
					      Location='2,68'
					      Margin='2,2,2,2'
					      MaximumSize='64,64'
					      MinimumSize='64,64'
					      Name='text'
					      PalText='text1'
					      RStyleDefault='rs_default'
					      ScrollExtent='64,172'
					      Size='64,64'
					      TextColor='#96F4FC'>xxx111LINE ONE111LINE TWO111LINE THREE111LINE FOUR111LINE FIVE111LINE SIX111LINE SEVEN111LINE EIGHT111LINE NINE111LINE TEN111LINE ELEVEN111</Text>
				</VolumePage>
				<Text Font='bold_12'
				      LocalText='Attachments'
				      Location='-1,-2'
				      Name='label'
				      PackSize='a'
				      PalText='header'
				      ScrollExtent='104,16'
				      Size='104,16'
				      TextColor='#97FFFF'>Attachments</Text>
				<Scrollbar AutoVisibility='true'
				           Control='volume'
				           Location='98,17'
				           Name='Scroll'
				           PackLocation='fff,nfn'
				           PackSize='f,a'
				           ScrollExtent='11,87'
				           Size='11,87'
				           Style='/Styles.scrollbar.default.vHud4.style'/>
				<Page BackgroundOpacity='0.70'
				      BackgroundTint='#00FFFF'
				      GetsInput='false'
				      Location='0,12'
				      Name='outline'
				      PackLocation='nfn,nfn'
				      PackSize='a,a'
				      PalBgTint='line2'
				      RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
				      ScrollExtent='112,97'
				      Size='112,97'/>
				<Page BackgroundColor='#FFFFFF'
				      BackgroundOpacity='0.70'
				      BackgroundTint='#03546B'
				      Location='3,19'
				      Name='box'
				      PackLocation='nfn,nfn'
				      PackSize='a,a'
				      PalBgTint='back3'
				      RStyleDefault='/Styles.New.whitebox_palW.rs_default'
				      ScrollExtent='94,85'
				      Size='94,85'/>
			</Page>
		</Composite>
		<Button LocalText='[@ui_pm:fwd]'
		        Location='7,143'
		        Name='buttonForward'
		        PackLocation='nfn,fff'
		        PackSize='p,f'
		        RStyleDefault='/Styles.New.buttons.hud.style'
		        ScrollExtent='198,16'
		        Size='198,16'
		        Style='/Styles.New.buttons.hud.style'
		        TextColor='#000000'>@ui_pm:fwd</Button>
		<Button LocalText='[@ui_pm:reply]'
		        Location='7,123'
		        Name='buttonReply'
		        PackLocation='nfn,fff'
		        PackSize='p,f'
		        RStyleDefault='/Styles.New.buttons.hud.style'
		        ScrollExtent='198,16'
		        Size='198,16'
		        Style='/Styles.New.buttons.hud.style'
		        TextColor='#000000'>@ui_pm:reply</Button>
		<Button LocalText='[@ui_pm:delete]'
		        Location='291,123'
		        Name='buttonDelete'
		        PackLocation='fff,fff'
		        PackSize='p,f'
		        RStyleDefault='/Styles.New.buttons.hud.style'
		        ScrollExtent='198,16'
		        Size='198,16'
		        Style='/Styles.New.buttons.hud.style'
		        TextColor='#000000'>@ui_pm:delete</Button>
		<Button LocalText='[@ui_pm:new]'
		        Location='291,143'
		        Name='buttonNew'
		        PackLocation='fff,fff'
		        PackSize='p,f'
		        RStyleDefault='/Styles.New.buttons.hud.style'
		        ScrollExtent='198,16'
		        Size='198,16'
		        Style='/Styles.New.buttons.hud.style'
		        TextColor='#000000'>@ui_pm:new</Button>
		<Page BackgroundColor='#FFFFFF'
		      BackgroundTint='#00FFFF'
		      Name='bg_list'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      PalBgTint='outline1'
		      ScrollExtent='497,165'
		      Size='497,165'>
			<Page BackgroundOpacity='0.90'
			      BackgroundTint='#1CFFFF'
			      GetsInput='false'
			      Name='outline'
			      PackLocation='nfn,nfn'
			      PackSize='a,a'
			      PalBgTint='line1'
			      RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
			      ScrollExtent='497,165'
			      Size='497,165'/>
			<Page BackgroundColor='#FFFFFF'
			      BackgroundOpacity='0.70'
			      BackgroundTint='#00D6FB'
			      Location='0,4'
			      Name='inFrame'
			      PackLocation='nfn,nfn'
			      PackSize='a,a'
			      PalBgTint='back1'
			      RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
			      ScrollExtent='494,161'
			      Size='494,161'/>
		</Page>
	</Page>
	<Page Name='bg'
	      PackLocation='nfn,nfn'
	      PackSize='a,a'
	      ScrollExtent='514,428'
	      Size='514,428'>
		<Page Location='480,8'
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
		<Page Name='caption'
		      PackLocation='nfn,nfn'
		      PackSize='a,f'
		      ScrollExtent='275,16'
		      Size='275,16'>
			<Text Enabled='false'
			      Font='bold_12'
			      LocalText='[@UI_PM:CPT_BROWSER]'
			      Margin='6,0,0,0'
			      MaxLines='1'
			      Name='text'
			      PackSize='a,f'
			      PalText='titletext'
			      ScrollExtent='275,16'
			      Size='275,16'
			      TextAlignmentVertical='Center'
			      TextCapital='true'
			      TextColor='#00354F'>@ui_pm:cpt_browser</Text>
		</Page>
		<Page BackgroundTint='#00D6FB'
		      GetsInput='false'
		      Location='1,0'
		      Name='frame'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      PalBgTint='baselight'
		      RStyleDefault='/Styles.New.thin_in.rs_default'
		      ScrollExtent='513,428'
		      Selectable='true'
		      Size='513,428'>
			<Page BackgroundColor='#FFFFFF'
			      GetsInput='false'
			      Location='1,0'
			      Name='lines'
			      PackSize='a,a'
			      RStyleDefault='/Styles.space.boxes.generic4.rs_default'
			      ScrollExtent='513,428'
			      Size='513,428'>
				<Page BackgroundColor='#FFFFFF'
				      GetsInput='false'
				      Location='0,406'
				      Name='outlineBL'
				      OpacityRelativeMin='0.80'
				      PackLocation='nfn,fff'
				      PackSize='p,f'
				      ScrollExtent='403,22'
				      Size='403,22'>
					
				</Page>
				<Page BackgroundColor='#FFFFFF'
				      GetsInput='false'
				      Location='141,406'
				      Name='outlineBR'
				      OpacityRelativeMin='0.80'
				      PackLocation='fff,fff'
				      PackSize='p,f'
				      RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
				      ScrollExtent='372,22'
				      Size='372,22'>
					
				</Page>
				<Page BackgroundColor='#FFFFFF'
				      GetsInput='false'
				      Location='141,0'
				      Name='outlineTR'
				      OpacityRelativeMin='0.80'
				      PackLocation='fff,nfn'
				      PackSize='p,f'
				      ScrollExtent='372,22'
				      Size='372,22'>
					
				</Page>
				<Page BackgroundColor='#FFFFFF'
				      GetsInput='false'
				      Name='outlineTL'
				      OpacityRelativeMin='0.80'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
				      ScrollExtent='403,22'
				      Size='403,22'>
					
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
		      ScrollExtent='514,420'
		      Selectable='true'
		      Size='514,420'/>
		<Page BackgroundOpacity='1.00'
		      BackgroundTint='#00D6FB'
		      GetsInput='false'
		      Location='0,5'
		      Name='back'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      PalBgTint='back1'
		      RStyleDefault='/Styles.space.spaceglow.rs_default'
		      ScrollExtent='514,420'
		      Selectable='true'
		      Size='514,420'/>
	</Page>
</Page>