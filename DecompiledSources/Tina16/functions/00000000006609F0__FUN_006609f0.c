/* Ghidra address: 006609f0 */
/* Ghidra symbol: FUN_006609f0 */


undefined1 FUN_006609f0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  undefined1 local_21;
  longlong local_20;
  
  local_40 = auStack_68;
  local_30 = 0;
  local_20 = *(longlong *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(local_20 + 0x28);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffb4);
  (*pcVar2)(uVar1,param_2,&local_30);
  local_21 = local_30 != 0;
  if ((bool)local_21) {
    *(longlong *)(local_20 + 0x58) = param_1;
    FUN_0064f3f0(local_30,*(undefined8 *)(local_20 + 0x28),0,0);
    *(undefined8 *)(local_20 + 0x58) = 0;
  }
  return local_21;
}

