/* Ghidra address: 007de160 */
/* Ghidra symbol: FUN_007de160 */


void FUN_007de160(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                 char param_5,uint param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 local_40;
  int local_3c;
  undefined8 uStack_38;
  short *local_30 [2];
  
  local_30[0] = (short *)0x0;
  lVar4 = FUN_007e3880(param_1);
  if (lVar4 != 0) {
    cVar1 = FUN_007e6b10(lVar4);
    if (cVar1 != '\0') {
      param_6 = param_6 | 0x20002;
    }
  }
  FUN_00414b50(local_30,param_3);
  if (((param_6 & 0x400) != 0) &&
     ((local_30[0] == (short *)0x0 || ((*local_30[0] == 0x26 && (local_30[0][1] == 0)))))) {
    FUN_00416ad0(local_30,&DAT_007de414);
  }
  iVar2 = FUN_00416db0(local_30[0],&DAT_007de424);
  if (iVar2 == 0) {
    if ((param_6 & 0x400) == 0) {
      uStack_38 = param_4[1];
      local_3c = (int)((ulonglong)*param_4 >> 0x20);
      _local_40 = CONCAT44(local_3c + 4,(int)*param_4);
      uVar5 = FUN_005ffa40(param_2);
      thunk_FUN_03998bad(uVar5,&local_40,6,2);
    }
    goto code_r0x007de3d6;
  }
  FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),1);
  if (*(char *)(param_1 + 0x82) != '\0') {
    FUN_005fce70(*(longlong *)(param_2 + 0x70),
                 *(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x70) + 0x18) + 0x31) | 1);
  }
  if (*(char *)(param_1 + 0x81) == '\0') {
    if (param_5 == '\0') {
      FUN_00423b50(param_4,1,1);
      FUN_005fc860(*(undefined8 *)(param_2 + 0x70),0xff000014);
      uVar5 = FUN_005ffa40(param_2);
      uVar7 = 0;
      if (local_30[0] != (short *)0x0) {
        uVar7 = *(undefined4 *)(local_30[0] + -2);
      }
      uVar6 = FUN_00416740(local_30[0]);
      thunk_FUN_041a24be(uVar5,uVar6,uVar7,param_4,param_6);
      FUN_00423b50(param_4,0xffffffff,0xffffffff);
    }
    if (param_5 != '\0') {
      iVar2 = FUN_005fbf20(0xff00000d);
      iVar3 = FUN_005fbf20(0xff000010);
      if (iVar2 == iVar3) {
        FUN_005fc860(*(undefined8 *)(param_2 + 0x70),0xff000014);
        goto LAB_007de393;
      }
    }
    FUN_005fc860(*(undefined8 *)(param_2 + 0x70),0xff000010);
  }
LAB_007de393:
  uVar5 = FUN_005ffa40(param_2);
  uVar7 = 0;
  if (local_30[0] != (short *)0x0) {
    uVar7 = *(undefined4 *)(local_30[0] + -2);
  }
  uVar6 = FUN_00416740(local_30[0]);
  thunk_FUN_041a24be(uVar5,uVar6,uVar7,param_4,param_6);
code_r0x007de3d6:
  FUN_00414480(local_30);
  return;
}

