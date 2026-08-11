/* Ghidra address: 01c938d0 */
/* Ghidra symbol: FUN_01c938d0 */


void FUN_01c938d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  lVar3 = FUN_01993ec0(*(undefined8 *)(param_1 + 0x27a8));
  if (lVar3 != 0) {
    cVar1 = FUN_0198a580(lVar3);
    if (cVar1 == '\x04') {
      cVar1 = FUN_01d04d40(lVar3);
      if (((cVar1 != '\0') && (*(char *)(*(longlong *)(lVar3 + 0x1a8) + 0x61) != '\0')) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x1a8) + 0x30) != 0)) {
        FUN_00414480(local_20);
        cVar1 = FUN_0072f4e0(L"Please enter the unlock password",L"Unlock password",local_20);
        if (cVar1 != '\0') {
          FUN_0043ea00(local_30,local_20[0]);
          if (local_30[0] != 0) {
            FUN_0043e130(&local_38,*(undefined8 *)(*(longlong *)(lVar3 + 0x1a8) + 0x30));
            FUN_0043e130(&local_40,local_20[0]);
            iVar2 = FUN_00416db0(local_38,local_40);
            if (iVar2 == 0) {
              (**(code **)(**(longlong **)(lVar3 + 0x1a8) + 0x18))(*(longlong **)(lVar3 + 0x1a8),0);
              FUN_0199e310(*(undefined8 *)(param_1 + 0x27a8),0,1,0);
            }
            else {
              FUN_0072d440(L"The Unlock password was not correct.\rThe block is kept locked.",1,4,0)
              ;
            }
          }
        }
      }
    }
  }
  FUN_00414560(&local_40,3);
  FUN_00414480(local_20);
  return;
}

