/* Ghidra address: 0139c950 */
/* Ghidra symbol: FUN_0139c950 */


void FUN_0139c950(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  
  cVar1 = FUN_004113d0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 7000),&PTR_FUN_0135f8e0);
  if (cVar1 != '\0') {
    local_20 = param_3;
    local_1c = param_2;
    FUN_01b1cd00(&local_1c,&local_20);
    uVar2 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    FUN_01a98380(uVar2,local_1c,local_20,&local_1c,&local_20);
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 7000) + 0x58))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 7000),0,local_1c,local_20);
  }
  return;
}

