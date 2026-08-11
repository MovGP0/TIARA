/* Ghidra address: 01839a30 */
/* Ghidra symbol: FUN_01839a30 */


undefined8 FUN_01839a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_50;
  undefined8 local_38;
  int local_2c;
  undefined8 local_20;
  
  local_50 = auStack_88;
  local_38 = 0;
  local_68 = 0;
  local_20 = FUN_01847460(&PTR_FUN_01846fb8,1,0,7);
  iVar1 = FUN_0181e3e0();
  local_2c = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_0181e3c0(param_2,local_2c);
      FUN_0043e1a0(&local_38,*(undefined8 *)(lVar3 + 0x18));
      iVar2 = FUN_00416db0(local_38,L"expr");
      if (iVar2 == 0) {
        uVar4 = FUN_0181e3c0(param_2,local_2c);
        uVar4 = FUN_0183a030(param_1,uVar4,param_3);
        FUN_01847420(local_20,uVar4);
      }
      else {
        iVar2 = FUN_00416db0(local_38,L"range");
        if (iVar2 == 0) {
          FUN_01847420(local_20,0);
        }
      }
      local_2c = local_2c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(&local_38);
  return local_20;
}

