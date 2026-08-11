/* Ghidra address: 0045c530 */
/* Ghidra symbol: FUN_0045c530 */


longlong FUN_0045c530(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 local_58 [32];
  longlong local_38;
  longlong local_30 [2];
  
  local_30[0] = *param_2;
  lVar1 = FUN_0041e270(&DAT_004045d8,local_30);
  local_38 = lVar1;
  if ((lVar1 != local_30[0]) && (*param_1 != 0)) {
    if (local_30[0] != 0) {
      FUN_0045bde0(local_58,local_30);
      (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,local_58);
    }
    if (lVar1 != 0) {
      FUN_0045bde0(local_58,&local_38);
      (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,local_58);
    }
  }
  return local_38;
}

