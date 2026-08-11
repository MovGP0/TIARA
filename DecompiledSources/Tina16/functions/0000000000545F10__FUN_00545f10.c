/* Ghidra address: 00545f10 */
/* Ghidra symbol: FUN_00545f10 */


longlong FUN_00545f10(longlong param_1,undefined **param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined **local_res10;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined1 *local_30;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  local_30 = auStack_68;
  local_20 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = auStack_68;
  if (*(longlong *)PTR_PTR_02002ff8 == 0) {
    FUN_004098e0(0x1a);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  uVar3 = FUN_004121f0(local_20);
  FUN_00411f00(uVar3,0xffffffff);
  cVar2 = FUN_0055f190(*(undefined8 *)(param_1 + 0x38),*param_4,&local_10);
  if (cVar2 == '\0') {
    local_res10 = param_2;
    if (param_2 == &PTR_FUN_00528c20) {
      local_res10 = (undefined **)FUN_0053c6f0(*param_4);
    }
    local_18 = *param_4;
    local_48 = param_4;
    local_10 = (*(code *)*local_res10)(local_res10,1,param_1,param_3);
    *(int *)(local_10 + 0x10) = (int)*param_4 - (int)local_18;
    FUN_00412130(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    *param_4 = *param_4 + (longlong)*(int *)(local_10 + 0x10);
    FUN_00546030(0,local_30);
  }
  return local_10;
}

