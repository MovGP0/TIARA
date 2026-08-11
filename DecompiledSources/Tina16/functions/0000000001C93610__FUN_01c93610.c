/* Ghidra address: 01c93610 */
/* Ghidra symbol: FUN_01c93610 */


void FUN_01c93610(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  lVar2 = FUN_01993ec0(*(undefined8 *)(param_1 + 0x27a8));
  if (lVar2 != 0) {
    cVar1 = FUN_0198a580(lVar2);
    if (cVar1 == '\x04') {
      cVar1 = FUN_01d04d40(lVar2);
      if (((cVar1 != '\0') && (*(char *)(*(longlong *)(lVar2 + 0x1a8) + 0x61) != '\0')) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x1a8) + 0x30) == 0)) {
        FUN_00414480(local_20);
        cVar1 = FUN_0072f4e0(L"Please enter the lock password",L"Lock password",local_20);
        if (cVar1 != '\0') {
          FUN_0043ea00(local_30,local_20[0]);
          if (local_30[0] != 0) {
            (**(code **)(**(longlong **)(lVar2 + 0x1a8) + 0x18))
                      (*(longlong **)(lVar2 + 0x1a8),local_20[0]);
            FUN_0199e310(*(undefined8 *)(param_1 + 0x27a8),0,1,0);
          }
        }
      }
    }
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

