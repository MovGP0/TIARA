/* Ghidra address: 006d6d00 */
/* Ghidra symbol: FUN_006d6d00 */


void FUN_006d6d00(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [12];
  int local_28;
  int local_24;
  
  if (*(longlong *)(param_1 + 0x498) != 0) {
    plVar3 = (longlong *)FUN_00777cd0();
    cVar1 = (**(code **)(*plVar3 + 0x98))(plVar3);
    if (((cVar1 != '\0') && ((*(byte *)(*(longlong *)(param_1 + 0x498) + 0x2c8) & 2) != 0)) &&
       ((*(char *)(*(longlong *)(param_1 + 0x498) + 0x4c1) == '\0' ||
        (cVar1 = FUN_00781870(), cVar1 != '\0')))) {
      uVar4 = FUN_0065b870(param_1);
      thunk_FUN_03e49910(uVar4,&local_28);
      FUN_00423b50(&local_28,-local_28,-local_24);
      local_3c = 0;
      local_38 = 0;
      uVar2 = FUN_00652390(param_1,&local_3c,0);
      FUN_00423b10(&local_28,uVar2,uVar2);
      plVar3 = (longlong *)FUN_00777cd0();
      (**(code **)(*plVar3 + 0x1c0))(plVar3,local_34,0x2a);
      uVar4 = FUN_00777cd0();
      FUN_00778dc0(uVar4,*(undefined8 *)(param_2 + 8),local_34,&local_28,0,0);
      *(undefined8 *)(param_2 + 0x18) = 1;
      return;
    }
  }
  FUN_00658480(param_1,param_2);
  return;
}

