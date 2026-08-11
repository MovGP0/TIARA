/* Ghidra address: 016c0a90 */
/* Ghidra symbol: FUN_016c0a90 */


void FUN_016c0a90(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  byte *in_stack_fffffffffffffbc0;
  byte *pbVar5;
  undefined8 local_430;
  undefined1 local_428 [268];
  undefined1 local_31c [4];
  undefined1 local_318 [8];
  undefined8 local_310;
  uint local_308 [64];
  undefined1 local_208 [256];
  byte local_108 [256];
  
  local_430 = 0;
  local_310 = 0;
  while( true ) {
    cVar1 = FUN_016b9d70(param_1);
    if (cVar1 != '\0') break;
    puVar4 = &DAT_016c0df8;
    FUN_016ba960(param_1,local_108,0,&DAT_016c0df4,&DAT_016c0df8,
                 (ulonglong)in_stack_fffffffffffffbc0 & 0xffffffffffffff00);
    cVar1 = FUN_016ba100(param_1,0x22);
    if (cVar1 == '\0') {
      lVar3 = FUN_016bdfc0(param_1,local_108,1);
      if (lVar3 != 0) {
        *(undefined1 *)(lVar3 + 0x30) = 1;
      }
    }
    else {
      puVar4 = &DAT_016c0df8;
      FUN_016ba960(param_1,local_208,0,&DAT_016c0e24,&DAT_016c0df8,0x22);
      FUN_016bdec0(param_1,local_108,local_208);
    }
    puVar4 = (undefined *)((ulonglong)puVar4 & 0xffffffffffffff00);
    pbVar5 = local_108;
    cVar1 = FUN_016babb0(param_1,1,L"DEV|LOT",&DAT_016c0e44,puVar4,pbVar5);
    if (cVar1 != '\0') {
      cVar1 = FUN_016ba100(param_1,0x2f);
      if (cVar1 != '\0') {
        cVar1 = FUN_016bb0f0(param_1,0,9,local_31c);
        if (cVar1 == '\0') {
          puVar4 = &DAT_016c0df8;
          FUN_016ba960(param_1,local_428,0,&DAT_016c0e24,&DAT_016c0df8,
                       (ulonglong)pbVar5 & 0xffffffffffffff00);
        }
        else {
          cVar1 = FUN_016ba100(param_1,0x2f);
          if (cVar1 != '\0') {
            puVar4 = &DAT_016c0df8;
            FUN_016ba960(param_1,local_428,0,&DAT_016c0e24,&DAT_016c0df8,
                         (ulonglong)pbVar5 & 0xffffffffffffff00);
          }
        }
      }
      FUN_016bdd70(param_1,&local_310,local_318,0);
      FUN_016ba100(param_1,0x25);
    }
    iVar2 = FUN_00414f50(local_108,&DAT_016c0e64,(ulonglong)local_108[0] + 1);
    if (iVar2 == 0) {
      local_308[0] = 0x56454403;
    }
    else {
      iVar2 = FUN_00414f50(local_108,&LAB_016c0e68,(ulonglong)local_108[0] + 1);
      if (iVar2 == 0) {
        local_308[0] = 0x544f4c03;
      }
      else {
        local_308[0] = local_308[0] & 0xffffff00;
      }
    }
    FUN_004169a0(&local_430,local_308);
    in_stack_fffffffffffffbc0 = local_108;
    cVar1 = FUN_016babb0(param_1,1,local_430,&DAT_016c0e44,(ulonglong)puVar4 & 0xffffffffffffff00,
                         in_stack_fffffffffffffbc0);
    if (cVar1 != '\0') {
      cVar1 = FUN_016ba100(param_1,0x2f);
      if (cVar1 != '\0') {
        cVar1 = FUN_016bb0f0(param_1,0,9,local_31c);
        if (cVar1 == '\0') {
          in_stack_fffffffffffffbc0 =
               (byte *)((ulonglong)in_stack_fffffffffffffbc0 & 0xffffffffffffff00);
          FUN_016ba960(param_1,local_428,0,&DAT_016c0e24,&DAT_016c0df8,in_stack_fffffffffffffbc0);
        }
        else {
          cVar1 = FUN_016ba100(param_1,0x2f);
          if (cVar1 != '\0') {
            in_stack_fffffffffffffbc0 =
                 (byte *)((ulonglong)in_stack_fffffffffffffbc0 & 0xffffffffffffff00);
            FUN_016ba960(param_1,local_428,0,&DAT_016c0e24,&DAT_016c0df8,in_stack_fffffffffffffbc0);
          }
        }
      }
      FUN_016bdd70(param_1,&local_310,local_318,0);
      FUN_016ba100(param_1,0x25);
    }
  }
  FUN_00414480(&local_430);
  FUN_004144d0(&local_310);
  return;
}

