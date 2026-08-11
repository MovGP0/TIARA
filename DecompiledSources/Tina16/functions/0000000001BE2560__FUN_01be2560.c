/* Ghidra address: 01be2560 */
/* Ghidra symbol: FUN_01be2560 */


undefined8 FUN_01be2560(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int local_2c;
  
  uVar1 = *(undefined8 *)(param_2 + 800);
  cVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if (cVar2 == '\0') {
    thunk_FUN_03e0f7b4(0x1014,0,&local_2c,0);
    iVar3 = FUN_00611650(param_1[0xc9]);
    if ((1 < iVar3) && (local_2c != 0)) {
      iVar3 = FUN_00611650(param_1[0xc9]);
      iVar3 = iVar3 + -2;
      iVar5 = 1;
      if (0 < iVar3) {
        do {
          uVar4 = FUN_01be08f0(param_1[0xc9],iVar5);
          FUN_0064dbe0(uVar4,0);
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    FUN_01be1b80(param_1);
    (**(code **)(*param_1 + 0x408))(param_1);
  }
  return uVar1;
}

