/* Ghidra address: 010fbe80 */
/* Ghidra symbol: FUN_010fbe80 */


void FUN_010fbe80(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  if (*(char *)(param_1[0xf9] + 0x328) == '\0') {
LAB_010fbfdd:
    FUN_010e3f30(param_1,param_2);
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x460))(param_1);
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x460))(param_1);
      if (0 < *(int *)(*(longlong *)(lVar1 + 8) + 0x44c)) {
        local_20[0] = FUN_004b6930(&PTR_FUN_00478280,1);
        (**(code **)(*param_1 + 0x528))(param_1,local_20);
        lVar1 = (**(code **)(*param_1 + 0x458))(param_1);
        if (lVar1 != 0) {
          lVar1 = (**(code **)(*param_1 + 0x458))(param_1);
          *(undefined1 *)(param_1 + 0x169) = *(undefined1 *)(*(longlong *)(lVar1 + 8) + 0x434);
          lVar1 = (**(code **)(*param_1 + 0x458))(param_1);
          FUN_01cc37d0(*(undefined8 *)(lVar1 + 8),&local_38);
          FUN_00414ad0(param_1 + 0x16a,local_38);
        }
        (**(code **)(*param_1 + 0x538))(param_1,local_20[0]);
        FUN_00410f20(local_20[0]);
        goto LAB_010fbfdd;
      }
    }
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,local_30,0x854);
    FUN_0072d440(local_30[0],0,4,0);
    FUN_0082a6c0(param_1[0xf9],0);
  }
  FUN_00414560(&local_38,2);
  return;
}

