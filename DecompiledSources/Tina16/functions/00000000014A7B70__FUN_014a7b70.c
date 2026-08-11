/* Ghidra address: 014a7b70 */
/* Ghidra symbol: FUN_014a7b70 */


undefined8
FUN_014a7b70(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined1 *param_9,undefined8 param_10,undefined8 param_11)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_4c [32];
  undefined8 local_2c;
  uint local_1c;
  undefined8 local_18;
  longlong local_10;
  
  local_60 = auStack_98;
  local_68 = 0;
  local_58 = 0;
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  FUN_00417580(local_4c,&DAT_01d2e6d8);
  local_18 = param_2;
  FUN_00414480(param_8);
  *param_9 = 0;
  FUN_00414480(param_11);
  local_78 = param_3;
  local_10 = FUN_01d30b30(&DAT_01d2e8e8,1,param_2,0x40);
  if (local_10 != 0) {
    iVar2 = FUN_01d31a40(local_10);
    if (iVar2 == 0) {
      if (*param_1 != 0) {
        *(undefined1 *)(*param_1 + 0x490) = 1;
      }
      FUN_00414ad0(local_10 + 0x60,param_5);
      FUN_00414ad0(local_10 + 0x70,param_6);
      FUN_01d31aa0(local_10,*param_1);
      *(undefined1 *)(local_10 + 0x7e) = param_4;
      FUN_01d317c0(local_10,local_4c);
      if ((local_1c & 1) != 0) {
        local_18 = FUN_014a7180(param_2);
        *(undefined8 *)(local_10 + 0x10) = local_18;
      }
      if ((*param_1 != 0) && ((local_1c & 2) != 0)) {
        *(uint *)(*param_1 + 0x21c) = local_1c;
      }
      cVar1 = FUN_014a7a80(auStack_98,local_4c);
      if (cVar1 == '\0') {
        FUN_00b047e0(0xfffffffd);
      }
      else {
        FUN_01d32e90(*(undefined8 *)PTR_DAT_02003458,&local_10);
        iVar2 = FUN_01d31a40(local_10);
        if (iVar2 == 0) {
          if (*param_1 == 0) {
            *param_1 = *(longlong *)(local_10 + 0x40);
          }
          FUN_00414ad0(param_8,local_2c);
          *param_9 = *(undefined1 *)(local_10 + 0x79);
        }
      }
      iVar2 = FUN_01d31a40(local_10);
      if (iVar2 != 0) {
        uVar3 = FUN_01d31a40(local_10);
        FUN_00b047e0(uVar3);
      }
      goto code_r0x014a7e85;
    }
  }
  if (*(int *)PTR_DAT_02004810 == 0x1001) {
    FUN_00b047e0(0xfffffffd);
  }
  else {
    FUN_00b047e0(*(undefined4 *)PTR_DAT_02004810);
  }
code_r0x014a7e85:
  if (local_10 != 0) {
    iVar2 = FUN_01d31a40(local_10);
    if (iVar2 != 0) {
      uVar3 = FUN_01d31a40(local_10);
      FUN_01d30730(&local_68,uVar3);
      FUN_00414ad0(param_11,local_68);
    }
  }
  FUN_00410f20(local_10);
  FUN_00414480(&local_68);
  FUN_00414480(&local_58);
  FUN_00417740(local_4c,&DAT_01d2e6d8);
  FUN_00414560(&param_5,3);
  return local_18;
}

