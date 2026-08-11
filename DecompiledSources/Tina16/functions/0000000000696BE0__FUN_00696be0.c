/* Ghidra address: 00696be0 */
/* Ghidra symbol: FUN_00696be0 */


undefined8 FUN_00696be0(longlong param_1,HDC param_2)

{
  longlong lVar1;
  char cVar2;
  HWND hwnd;
  HANIMATIONBUFFER hbpAnimation;
  undefined8 uVar3;
  ulonglong uVar4;
  RECT local_58;
  BP_ANIMATIONPARAMS local_48;
  HDC local_38;
  HDC local_30;
  
  uVar3 = 0;
  cVar2 = FUN_00696b90(param_1);
  if (cVar2 != '\0') {
    FUN_0040d200(&local_48,0x10,0);
    local_48.cbSize = 0x10;
    local_48.style = BPAS_LINEAR;
    if (*(char *)(param_1 + 0x40) != *(char *)(param_1 + 0x38)) {
      local_48.dwDuration = 200;
    }
    lVar1 = **(longlong **)(param_1 + 0x10);
    (**(code **)(lVar1 + 0xe0))(*(longlong **)(param_1 + 0x10),&local_58);
    hwnd = (HWND)FUN_00786090(param_1);
    hbpAnimation = BeginBufferedAnimation
                             (hwnd,param_2,&local_58,BPBF_COMPATIBLEBITMAP,(BP_PAINTPARAMS *)0x0,
                              &local_48,&local_30,&local_38);
    if (hbpAnimation != (HANIMATIONBUFFER)0x0) {
      uVar3 = 1;
      uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),local_48.dwDuration != 0);
      if (local_30 != (HDC)0x0) {
        FUN_00696d90(param_1,local_30,*(char *)(param_1 + 0x38) == '\0',uVar4 & 0xffffffff);
      }
      if (local_38 != (HDC)0x0) {
        FUN_00696d90(param_1,local_38,*(undefined1 *)(param_1 + 0x38),uVar4 & 0xffffffff);
      }
      EndBufferedAnimation(hbpAnimation,-1);
    }
    *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_1 + 0x38);
  }
  return uVar3;
}

