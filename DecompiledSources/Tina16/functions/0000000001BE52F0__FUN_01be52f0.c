/* Ghidra address: 01be52f0 */
/* Ghidra symbol: FUN_01be52f0 */


undefined8 FUN_01be52f0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)PTR_DAT_02004030;
  uVar4 = 0;
  iVar3 = thunk_FUN_04166556(param_2,0,0,0,1);
  if ((iVar3 != 0) && (uVar4 = 1, *(int *)(param_2 + 8) != 0x12)) {
    cVar2 = FUN_0080c920(uVar1,param_2);
    if (cVar2 == '\0') {
      cVar2 = FUN_0080c790(uVar1,param_2);
      if (cVar2 == '\0') {
        if ((*(uint *)(param_2 + 8) < 0x100) || (0x109 < *(uint *)(param_2 + 8))) {
          thunk_FUN_040cea4c(param_2);
          thunk_FUN_040da573(param_2);
        }
        else {
          uVar4 = 0;
        }
      }
    }
  }
  return uVar4;
}

