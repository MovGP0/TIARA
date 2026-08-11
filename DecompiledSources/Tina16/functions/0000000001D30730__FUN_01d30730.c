/* Ghidra address: 01d30730 */
/* Ghidra symbol: FUN_01d30730 */


undefined8 FUN_01d30730(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_2 < 0x1004) {
    if (param_2 == 0x1003) {
      FUN_00414ad0(param_1,
                   L"The actual and declared size of the data block being read/written is not the same"
                  );
      goto code_r0x01d30845;
    }
    if (param_2 == 0x1000) {
      FUN_00414ad0(param_1,L"Invalid OBSS function call");
      goto code_r0x01d30845;
    }
    if (param_2 == 0x1001) {
      FUN_00414ad0(param_1,L"Invalid OBSS file header");
      goto code_r0x01d30845;
    }
    if (param_2 == 0x1002) {
      FUN_00414ad0(param_1,L"Data stream read/write error");
      goto code_r0x01d30845;
    }
  }
  else {
    if (param_2 == 0x1004) {
      FUN_00414ad0(param_1,L"File header I/O error");
      goto code_r0x01d30845;
    }
    if (param_2 == 0x1005) {
      FUN_00414ad0(param_1,
                   L"This file can\'t be loaded because it was created with a higher version of Tina."
                  );
      goto code_r0x01d30845;
    }
    if (param_2 == 0x1006) {
      uVar1 = FUN_00b89270();
      FUN_0041ddd0(local_20,&LAB_01d30718);
      FUN_00b8e650(uVar1,param_1,L"Obss_dr2.OBSSErrCantSaveInV7Format",local_20[0]);
      goto code_r0x01d30845;
    }
  }
  FUN_00414480(param_1);
code_r0x01d30845:
  FUN_00414480(local_20);
  return param_1;
}

