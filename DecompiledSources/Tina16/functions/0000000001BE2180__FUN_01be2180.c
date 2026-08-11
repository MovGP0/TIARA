/* Ghidra address: 01be2180 */
/* Ghidra symbol: FUN_01be2180 */


void FUN_01be2180(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bdf860);
  if (cVar1 == '\0') {
    param_1[0xb0] = 0;
  }
  else {
    *(undefined8 *)(param_1[0xba] + 0x580) = param_2;
  }
  FUN_00742eb0(*(undefined8 *)(param_1[0xba] + 0x650),1);
  lVar2 = FUN_01be0910(*(undefined8 *)(param_1[0xba] + 0x648));
  if (*(char *)(lVar2 + 0x590) != '\0') {
    FUN_00742eb0(*(undefined8 *)(param_1[0xba] + 0x638),0);
    lVar2 = FUN_01be2d90(param_1);
    lVar3 = FUN_01c01290(param_1);
    if (lVar2 != lVar3) {
      *(undefined8 *)(*(longlong *)(param_1[0xba] + 0x638) + 0x18) = 1;
    }
    cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_00742eb0(*(undefined8 *)(param_1[0xba] + 0x638),cVar1 == '\0');
  }
  return;
}

