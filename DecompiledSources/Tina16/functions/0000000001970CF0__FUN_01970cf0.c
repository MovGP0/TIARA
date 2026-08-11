/* Ghidra address: 01970cf0 */
/* Ghidra symbol: FUN_01970cf0 */


undefined8 FUN_01970cf0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_40;
  longlong local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  local_40 = param_4;
  if (param_4 == 1) {
    local_40 = *(longlong *)(param_1 + 0x248);
  }
  if (local_40 == 0) {
    local_40 = *(longlong *)(param_1 + 0x248);
  }
  cVar1 = FUN_01973400(param_1,param_3,param_2);
  if (cVar1 == '\0') {
    FUN_01978dc0(*(undefined8 *)(param_1 + 0x1b8),param_2,param_3,local_20,local_40);
    if (local_20[0] != 0) {
      FUN_0041ddd0(local_30,PTR_PTR_02005a10);
      iVar2 = FUN_00416db0(local_20[0],local_30[0]);
      if ((iVar2 != 0) || (*(char *)(*(longlong *)(param_1 + 0x1a8) + 0x32) == '\0')) {
        if (*(char *)(*(longlong *)(param_1 + 0x1a8) + 0x33) == '\0') {
          if (param_4 == 1) {
            uVar3 = FUN_0180bfb0();
            FUN_01809b60(uVar3,&local_38,L"clErrorInExp");
            FUN_00416ba0(local_20,local_38,local_20[0]);
          }
          else {
            if (*(longlong *)(param_1 + 0x158) != 0) {
              FUN_00416cd0(local_20,3,*(undefined8 *)(param_1 + 0x158),&DAT_01970ef8,local_20[0]);
            }
            (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x78))
                      (*(longlong **)(param_1 + 0x1b0),local_20[0]);
          }
          uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_20[0]);
          FUN_004134c0(uVar3);
        }
        else {
          FUN_00468a10(param_2,param_3);
        }
      }
    }
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return param_2;
}

