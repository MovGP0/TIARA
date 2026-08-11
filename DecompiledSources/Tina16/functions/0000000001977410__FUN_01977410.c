/* Ghidra address: 01977410 */
/* Ghidra symbol: FUN_01977410 */


void FUN_01977410(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  code *local_38;
  longlong local_30;
  
  lVar1 = *(longlong *)(param_1 + 0x248);
  *(undefined8 *)(lVar1 + 0x78) = 2;
  local_38 = FUN_01974d80;
  local_30 = param_1;
  pcVar2 = (code *)FUN_00411550(lVar1,0xffe8);
  (*pcVar2)(lVar1,param_2,&local_38,param_3,param_4);
  *(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0x78) = 0;
  return;
}

