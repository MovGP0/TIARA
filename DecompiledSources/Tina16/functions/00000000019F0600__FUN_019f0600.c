/* Ghidra address: 019f0600 */
/* Ghidra symbol: FUN_019f0600 */


undefined8 FUN_019f0600(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_30 [2];
  char local_19 [9];
  
  local_30[0] = 0;
  FUN_019effd0(*(undefined8 *)(param_1 + 0x100),param_2,param_3,1,local_19);
  if (local_19[0] != '\0') {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0x58);
    uVar2 = FUN_017ff620(uVar1);
    *(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0x58) = uVar2;
    FUN_019f0510(param_1,local_30,*param_4);
    FUN_00414ad0(param_4,local_30[0]);
    FUN_019f0600(param_1,param_2,param_3,param_4);
    *(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0x58) = uVar1;
  }
  FUN_00414480(local_30);
  return param_2;
}

