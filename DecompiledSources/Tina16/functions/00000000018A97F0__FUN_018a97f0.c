/* Ghidra address: 018a97f0 */
/* Ghidra symbol: FUN_018a97f0 */


void FUN_018a97f0(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  FUN_0064dbe0(param_1[0xad],param_2);
  lVar2 = param_1[0xf];
  cVar3 = FUN_004113d0(lVar2,&PTR_FUN_018a1608);
  if (cVar3 == '\0') {
    return;
  }
  if ((char)param_2 != '\0') {
    lVar5 = (**(code **)(*param_1 + 0x268))(param_1);
    uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x220) + 10);
    if ((uVar1 & 8) != 0) {
      uVar4 = (undefined4)CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
      goto LAB_018a984c;
    }
  }
  uVar4 = 0;
LAB_018a984c:
  FUN_0064dbe0(*(undefined8 *)(lVar2 + 0x710),uVar4);
  return;
}

