/* Ghidra address: 00eba290 */
/* Ghidra symbol: FUN_00eba290 */


void FUN_00eba290(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 *local_60;
  undefined1 local_4c [52];
  undefined8 local_18;
  longlong local_10;
  
  local_60 = auStack_98;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417580(local_4c,&DAT_01d2e6d8);
  local_18 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_004b9f40(local_18,local_res10[0]);
  local_78 = 0;
  local_10 = FUN_01d30b30(&DAT_01d2e8e8,1,local_18,0x40);
  if (local_10 != 0) {
    iVar2 = FUN_01d31a40(local_10);
    if (iVar2 == 0) {
      FUN_01d32bd0(local_10,local_4c);
      cVar1 = FUN_00eba190(auStack_98,local_4c);
      if (cVar1 != '\0') {
        iVar2 = FUN_01d31a40(local_10);
        if (iVar2 == 0) {
          FUN_00eb9e20(param_1,local_10);
        }
      }
      FUN_00414ad0(param_1 + 0x20,local_res10[0]);
    }
  }
  FUN_00410f20(local_10);
  FUN_00410f20(local_18);
  FUN_00417740(local_4c,&DAT_01d2e6d8);
  FUN_00414480(local_res10);
  return;
}

