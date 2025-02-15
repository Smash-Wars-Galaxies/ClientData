<Page BackgroundOpacity='0.50'
      Name='Controls'
      PackSize='1,1'
      ScrollExtent='1024,768'
      Size='1024,768'
      Visible='false'
      VisualEditLock='true'>
    <Data bindresulttext='entrypage.entryMenu.window.BindResultText'
          bindtext='entrypage.entryMenu.bindText'
          cancelbutton='entryPage.entryMenu.cancelButton'
          confirmbindtoken1='bind_confirm_overwrite1'
          confirmbindtoken2='bind_confirm_overwrite2'
          Name='CodeData'
          okbutton='entrypage.entrymenu.okbutton'/>
    <Page BackgroundOpacity='0.70'
          Name='EntryPage'
          PackSize='1,1'
          ScrollExtent='1024,768'
          Selectable='true'
          Size='1024,768'>
        <Page Location='357,309'
              MinimumSize='184,150'
              Name='entryMenu'
              PackLocation='cfc,cfc'
              PackSize='f,f'
              RStyleDefault='rs_default'
              ScrollExtent='311,150'
              Size='311,150'>
            <Text Font='bold_12'
                  GetsInput='true'
                  LocalText='xxx bind text here'
                  Location='10,29'
                  Name='BindText'
                  PackLocation='cpc,nfn'
                  PackSize='a,f'
                  PalText='text1'
                  ScrollExtent='291,29'
                  Size='291,29'
                  TextAlignment='Center'
                  TextAlignmentVertical='Center'
                  TextColor='#96F4FC'>xxx bind text here</Text>
            <Button BackgroundColor='#FFFFFF'
                    IsDefaultButton='true'
                    LocalText='[@ok]'
                    Location='191,123'
                    MinimumSize='0,19'
                    Name='OkButton'
                    PackLocation='fff,fff'
                    PackSize='p,f'
                    ScrollExtent='104,19'
                    Selectable='true'
                    Size='104,19'
                    Style='/Styles.New.buttons.hud.style'>@ok</Button>
            <Button IsCancelButton='true'
                    LocalText='[@cancel]'
                    Location='16,123'
                    MinimumSize='0,19'
                    Name='CancelButton'
                    PackLocation='nfn,fff'
                    PackSize='p,f'
                    ScrollExtent='104,19'
                    Size='104,19'
                    Style='/Styles.New.buttons.hud.style'>@cancel</Button>
            <Page Location='15,68'
                  Name='window'
                  PackLocation='cpc,fff'
                  PackSize='a,p'
                  RStyleDefault='comp.'
                  ScrollExtent='282,39'
                  Size='282,39'>
                <Text Font='bold_12'
                      GetsInput='true'
                      LocalText='xxx BIND DATA HERE'
                      Location='8,8'
                      Name='BindResultText'
                      PackLocation='cpc,nfn'
                      PackSize='a,a'
                      PalText='text1'
                      ScrollExtent='266,23'
                      Selectable='true'
                      Size='266,23'
                      TextAlignment='Center'
                      TextAlignmentVertical='Center'
                      TextColor='#96F4FC'>xxx BIND DATA HERE</Text>
                <Page BackgroundColor='#FFFFFF'
                      BackgroundOpacity='0.80'
                      BackgroundTint='#00FFFF'
                      Name='outline'
                      PackLocation='nfn,nfn'
                      PackSize='a,a'
                      PalBgTint='line2'
                      RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
                      ScrollExtent='282,39'
                      Size='282,39'>
                    <Page BackgroundColor='#FFFFFF'
                          BackgroundOpacity='0.70'
                          BackgroundTint='#03546B'
                          Location='3,4'
                          Name='box'
                          PackLocation='nfn,nfn'
                          PackSize='a,a'
                          PalBgTint='back3'
                          RStyleDefault='/Styles.New.whitebox_palW.rs_default'
                          ScrollExtent='276,32'
                          Size='276,32'/>
                </Page>
            </Page>
            <Page BackgroundColor='#FFFFFF'
                  BackgroundOpacity='0.90'
                  BackgroundTint='#1CFFFF'
                  GetsInput='false'
                  Location='8,27'
                  Name='outline'
                  PackLocation='nfn,nfn'
                  PackSize='a,a'
                  PalBgTint='line1'
                  RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
                  ScrollExtent='296,91'
                  Size='296,91'>
                <Page BackgroundColor='#FFFFFF'
                      BackgroundOpacity='0.40'
                      BackgroundTint='#00D6FB'
                      Location='4,3'
                      Name='box'
                      PackLocation='nfn,nfn'
                      PackSize='a,a'
                      PalBgTint='back1'
                      RStyleDefault='/Styles.New.pill_lrg.rs_default'
                      ScrollExtent='288,84'
                      Size='288,84'/>
            </Page>
            <Page Name='bg'
                  PackLocation='nfn,nfn'
                  PackSize='a,a'
                  ScrollExtent='311,150'
                  Size='311,150'>
                <Page Location='260,8'
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
                      ScrollExtent='164,19'
                      Size='164,19'>
                    <Text Enabled='false'
                          Font='bold_12'
                          LocalText='[@CPT_BIND_ENTRY]'
                          Margin='6,-2,0,0'
                          MaxLines='1'
                          MinimumSize='0,19'
                          Name='text'
                          PackSize='a,f'
                          PalText='titletext'
                          ScrollExtent='164,19'
                          Size='164,19'
                          TextAlignmentVertical='Center'
                          TextCapital='true'
                          TextColor='#00354F'>@cpt_bind_entry</Text>
                </Page>
                <Page BackgroundTint='#00D6FB'
                      GetsInput='false'
                      Location='1,0'
                      Name='frame'
                      PackLocation='nfn,nfn'
                      PackSize='a,a'
                      PalBgTint='baselight'
                      RStyleDefault='/Styles.New.thin_in.rs_default'
                      ScrollExtent='310,150'
                      Selectable='true'
                      Size='310,150'>
                    <Page BackgroundColor='#FFFFFF'
                          GetsInput='false'
                          Location='1,0'
                          Name='lines'
                          PackSize='a,a'
                          RStyleDefault='/Styles.space.boxes.generic4.rs_default'
                          ScrollExtent='310,150'
                          Size='310,150'>
                        <Page BackgroundColor='#FFFFFF'
                              GetsInput='false'
                              Location='0,128'
                              Name='outlineBL'
                              OpacityRelativeMin='0.80'
                              PackLocation='nfn,fff'
                              PackSize='p,f'
                              ScrollExtent='244,22'
                              Size='244,22'>
                          
                        </Page>
                        <Page BackgroundColor='#FFFFFF'
                              GetsInput='false'
                              Location='85,128'
                              Name='outlineBR'
                              OpacityRelativeMin='0.80'
                              PackLocation='fff,fff'
                              PackSize='p,f'
                              RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
                              ScrollExtent='225,22'
                              Size='225,22'>
                           
                        </Page>
                        <Page BackgroundColor='#FFFFFF'
                              GetsInput='false'
                              Location='85,0'
                              Name='outlineTR'
                              OpacityRelativeMin='0.80'
                              PackLocation='fff,nfn'
                              PackSize='p,f'
                              ScrollExtent='225,22'
                              Size='225,22'>
                           
                        </Page>
                        <Page BackgroundColor='#FFFFFF'
                              GetsInput='false'
                              Name='outlineTL'
                              OpacityRelativeMin='0.80'
                              PackLocation='nfn,nfn'
                              PackSize='p,f'
                              RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
                              ScrollExtent='244,22'
                              Size='244,22'>
                          
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
                      ScrollExtent='311,142'
                      Selectable='true'
                      Size='311,142'/>
                <Page BackgroundOpacity='1.00'
                      BackgroundTint='#00D6FB'
                      GetsInput='false'
                      Name='back'
                      PackLocation='nfn,nfn'
                      PackSize='a,a'
                      PalBgTint='back1'
                      RStyleDefault='/Styles.space.spaceglow.rs_default'
                      ScrollExtent='311,150'
                      Selectable='true'
                      Size='311,150'/>
            </Page>
        </Page>
    </Page>
</Page>