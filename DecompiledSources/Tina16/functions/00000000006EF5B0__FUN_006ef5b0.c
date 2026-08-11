/* Ghidra address: 006ef5b0 */
/* Ghidra symbol: FUN_006ef5b0 */


void FUN_006ef5b0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_006c36c8);
  if (cVar2 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    lVar1 = FUN_004113f0(param_2,&PTR_FUN_006c36c8);
    FUN_006ef050(param_1,*(undefined8 *)(lVar1 + 0x30));
    FUN_006ef160(param_1,*(undefined8 *)(lVar1 + 0x40));
    FUN_006ef370(param_1,0,*(undefined4 *)(lVar1 + 0x18));
    FUN_006ef510(param_1,*(undefined4 *)(lVar1 + 0x1c));
    FUN_006ef370(param_1,1,*(undefined4 *)(lVar1 + 0x24));
    FUN_006ef370(param_1,2,*(undefined4 *)(lVar1 + 0x28));
    FUN_006ef6c0(param_1,*(undefined8 *)(lVar1 + 0x10));
    uVar3 = FUN_006eee10(lVar1);
    FUN_006eee80(param_1,uVar3);
    FUN_006eeef0(param_1,*(undefined4 *)(lVar1 + 0x48));
  }
  return;
}

