/* Ghidra address: 007dca30 */
/* Ghidra symbol: FUN_007dca30 */


ushort FUN_007dca30(longlong param_1)

{
  char cVar1;
  int iVar2;
  short sVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  ushort uVar5;
  longlong local_res8 [4];
  undefined1 auStack_48 [38];
  ushort local_22;
  undefined8 local_20;
  
  local_20 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_22 = 0;
  uVar5 = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          cVar1 = FUN_007dc990(auStack_48,local_res8,DAT_01e12ee8);
          if (cVar1 == '\0') break;
          uVar5 = uVar5 | 0x2000;
        }
        cVar1 = FUN_007dc990(auStack_48,local_res8,&LAB_007dcb64);
        if (cVar1 == '\0') break;
        uVar5 = uVar5 | 0x4000;
      }
      cVar1 = FUN_007dc990(auStack_48,local_res8,DAT_01e12ef0);
      if (cVar1 == '\0') break;
      uVar5 = uVar5 | 0x4000;
    }
    cVar1 = FUN_007dc990(auStack_48,local_res8,DAT_01e12ef8);
    if (cVar1 == '\0') break;
    uVar5 = uVar5 | 0x8000;
  }
  if (local_res8[0] != 0) {
    uVar4 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),8);
    do {
      FUN_007dc700(&local_20,uVar4 & 0xffffffff);
      iVar2 = FUN_0043e6d0(local_res8[0],local_20);
      if (iVar2 == 0) {
        local_22 = (ushort)uVar4 | uVar5;
        break;
      }
      sVar3 = (ushort)uVar4 + 1;
      uVar4 = CONCAT62((int6)(uVar4 >> 0x10),sVar3);
    } while (sVar3 != 0x256);
  }
  FUN_00414480(&local_20);
  FUN_00414480(local_res8);
  return local_22;
}

