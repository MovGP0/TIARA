/* Ghidra address: 016be190 */
/* Ghidra symbol: FUN_016be190 */


void FUN_016be190(longlong param_1,byte *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 local_130;
  byte local_128 [264];
  
  local_130 = 0;
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  FUN_016bc400(param_1,&local_130);
  uVar1 = FUN_016a4be0(&PTR_FUN_016a1088,1,local_128,local_130,*(undefined8 *)(param_1 + 0x10));
  (**(code **)(**(longlong **)(param_1 + 0xa40) + 0x50))(*(longlong **)(param_1 + 0xa40),uVar1);
  FUN_004144d0(&local_130);
  return;
}

