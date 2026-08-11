/* Ghidra address: 00b2ad60 */
/* Ghidra symbol: FUN_00b2ad60 */


undefined1 FUN_00b2ad60(undefined8 param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined2 in_stack_ffffffffffffff88;
  undefined1 uVar6;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  short *local_38;
  undefined8 local_30 [2];
  
  uVar6 = (undefined1)((ushort)in_stack_ffffffffffffff88 >> 8);
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = (short *)0x0;
  local_49 = 0;
  iVar3 = FUN_00417170(&DAT_00b2afb0,param_2,1);
  if (iVar3 < 1) {
    FUN_00414520(&local_38);
    FUN_00414be0(local_30,param_2);
  }
  else {
    FUN_00416430(&local_38,param_2,1,iVar3 + -1);
    uVar4 = 0;
    if (param_2 != 0) {
      uVar4 = *(uint *)(param_2 + -4) >> 1;
    }
    FUN_00416430(local_30,param_2,iVar3 + 1,uVar4 - iVar3);
  }
  iVar3 = FUN_00416420(local_30[0],0);
  if (iVar3 != 0) {
    iVar3 = FUN_00416420(local_38,0);
    if ((iVar3 != 0) && (*local_38 == 0x27)) {
      uVar4 = 0;
      if (local_38 != (short *)0x0) {
        uVar4 = *(uint *)(local_38 + -2) >> 1;
      }
      if (local_38[(longlong)(int)uVar4 + -1] == 0x27) {
        uVar4 = 0;
        if (local_38 != (short *)0x0) {
          uVar4 = *(uint *)(local_38 + -2) >> 1;
        }
        FUN_00416430(&local_38,local_38,2,uVar4 - 2);
      }
    }
    FUN_00b15430(&local_40,local_38,&DAT_00b2afb8,0);
    FUN_00414be0(&local_38,local_40);
    FUN_00b15430(&local_48,local_38,&LAB_00b2afc0,0);
    FUN_00414be0(&local_38,local_48);
    uVar4 = FUN_00b2a910(param_1,local_38);
    uVar5 = FUN_00b28dc0(param_1,(short)uVar4);
    sVar1 = FUN_00b28880(uVar5,local_30[0]);
    if (sVar1 == -1) {
      uVar5 = FUN_00b28dc0(param_1,uVar4 & 0xffff);
      uVar6 = 0;
      FUN_00b28730(uVar5,local_30[0],0,0,0);
      uVar5 = FUN_00b28dc0(param_1,(short)uVar4);
      sVar1 = FUN_00b28660(uVar5);
      sVar1 = sVar1 + -1;
    }
    uVar2 = FUN_00b29a30(param_1,uVar4,0xfffe,0xfffe,CONCAT11(uVar6,1));
    *(short *)(param_3 + 0x15) = sVar1 + 1;
    *(undefined2 *)(param_3 + 9) = uVar2;
    *(undefined1 *)(param_3 + 8) = 8;
    local_49 = 1;
  }
  FUN_004145c0(&local_48,4);
  return local_49;
}

