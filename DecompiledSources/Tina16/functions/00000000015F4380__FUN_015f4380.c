/* Ghidra address: 015f4380 */
/* Ghidra symbol: FUN_015f4380 */


undefined8 FUN_015f4380(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  FUN_00414480(param_1);
  cVar2 = FUN_01d3f210(param_2);
  if (cVar2 != '\0') {
    uVar1 = *(undefined8 *)(param_2 + 0x1a8);
    cVar2 = FUN_01773f40(uVar1,0x800);
    if (cVar2 != '\0') {
      FUN_015fe5d0(param_1,uVar1,0);
      return param_1;
    }
  }
  lVar3 = FUN_015f3750(param_3,param_2,0);
  if (lVar3 == 0) {
    FUN_00414480(param_1);
  }
  else {
    FUN_00414ad0(param_1,*(undefined8 *)(*(longlong *)(lVar3 + 0x828) + 0x20));
  }
  FUN_015fd230(lVar3);
  return param_1;
}

