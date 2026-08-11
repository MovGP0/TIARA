/* Ghidra address: 018738f0 */
/* Ghidra symbol: FUN_018738f0 */


undefined8 FUN_018738f0(undefined8 param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  
  FUN_00415d10(param_1,2,0);
  uVar1 = FUN_018738d0(auStack_48,(param_2 & 0xff) >> 4);
  puVar2 = (undefined1 *)FUN_00414df0(param_1);
  *puVar2 = uVar1;
  uVar1 = FUN_018738d0(auStack_48,param_2 & 0xffffff0f);
  lVar3 = FUN_00414df0(param_1);
  *(undefined1 *)(lVar3 + 1) = uVar1;
  return param_1;
}

