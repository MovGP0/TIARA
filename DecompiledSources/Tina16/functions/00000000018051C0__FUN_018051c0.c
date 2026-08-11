/* Ghidra address: 018051c0 */
/* Ghidra symbol: FUN_018051c0 */


undefined1 FUN_018051c0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_49 = 0;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18);
  if ((param_2[4] == 0) || (*(char *)(*(longlong *)(param_1 + 0x48) + 0x18) != '\0')) {
    FUN_01804ec0(*(undefined8 *)(param_1 + 0x40),param_2 + 4,param_2 + 6);
  }
  else {
    FUN_01804ec0(*(undefined8 *)(param_1 + 0x40),local_30,&local_38);
  }
  FUN_00414b50(param_1 + 0x28,param_2[4]);
  if ((param_2[4] == 0) || (*(short *)param_2[4] == 0x2f)) {
    local_49 = 1;
  }
  else {
    iVar3 = FUN_00414cb0(param_2[4]);
    if (*(short *)(param_2[4] + -2 + (longlong)iVar3 * 2) == 0x2f) {
      FUN_004169f0(param_2 + 4,iVar3 + -1);
    }
    else {
      iVar3 = FUN_00414cb0(param_2[6]);
      if ((iVar3 < 1) || (*(short *)(param_2[6] + -2 + (longlong)iVar3 * 2) != 0x2f)) {
        while( true ) {
          uVar4 = FUN_018038a0(&PTR_FUN_01801848,1);
          cVar2 = FUN_018051c0(param_1,uVar4);
          if (cVar2 != '\0') break;
          (**(code **)*param_2)(param_2,uVar4);
        }
        FUN_00410f20(uVar4);
        if (*(longlong *)(param_1 + 0x28) != 0) {
          FUN_00416ba0(&local_40,&DAT_01805448,param_2[4]);
          iVar3 = FUN_0043e6d0(*(undefined8 *)(param_1 + 0x28),local_40);
          if (iVar3 != 0) {
            FUN_01804cf0(*(undefined8 *)(param_1 + 0x40));
          }
        }
        FUN_0043e1a0(&local_48,param_2[6]);
        iVar3 = FUN_004170c0(L" ld=\"0\"",local_48,1);
        if (iVar3 != 0) {
          FUN_00416e20(param_2 + 6,iVar3,7);
        }
        if ((*(char *)(param_1 + 0x50) == '\0') && (iVar3 != 0)) {
          FUN_018039a0(param_2);
          FUN_01803c90(param_2,uVar1);
          *(undefined1 *)(param_2 + 7) = 1;
          *(undefined1 *)(param_2 + 3) = 0;
        }
      }
      else {
        FUN_004169f0(param_2 + 6,iVar3 + -1);
      }
    }
  }
  FUN_00414560(&local_48,4);
  return local_49;
}

