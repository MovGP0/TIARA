/* Ghidra address: 00dfef00 */
/* Ghidra symbol: FUN_00dfef00 */


undefined1 * FUN_00dfef00(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined4 local_2c [3];
  
  FUN_0040d200(param_1,0x110,0);
  param_1[0x8f] = 1;
  param_1[0x90] = 1;
  cVar1 = FUN_00dfc0e0(auStack_78);
  if (cVar1 == '\0') {
    param_1[0xc] = 4;
  }
  else {
    *param_1 = 1;
    local_58 = param_1 + 0x28;
    local_50 = param_1 + 0x30;
    local_48 = param_1 + 0x2c;
    FUN_00dfc120(auStack_78,0,0,local_2c);
    iVar2 = FUN_00414f50(param_1 + 0x28,s_GenuineIntelCyrixInsteadAuthenti_01ed9b40,0xc);
    if (iVar2 == 0) {
      FUN_00dfc2c0(auStack_78,param_1,local_2c[0]);
    }
    else {
      iVar2 = FUN_00414f50(param_1 + 0x28,s_GenuineIntelCyrixInsteadAuthenti_01ed9b40 + 0x18,0xc);
      if (iVar2 == 0) {
        FUN_00dfd310(auStack_78,param_1,local_2c[0]);
      }
      else {
        iVar2 = FUN_00414f50(param_1 + 0x28,s_GenuineIntelCyrixInsteadAuthenti_01ed9b40 + 0xc,0xc);
        if (iVar2 == 0) {
          FUN_00dfe160(auStack_78,param_1,local_2c[0]);
        }
        else {
          iVar2 = FUN_00414f50(param_1 + 0x28,s_GenuineIntelCyrixInsteadAuthenti_01ed9b40 + 0x30,0xc
                              );
          if (iVar2 == 0) {
            FUN_00dfe610(auStack_78,param_1,local_2c[0]);
          }
          else {
            iVar2 = FUN_00414f50(param_1 + 0x28,s_GenuineIntelCyrixInsteadAuthenti_01ed9b40 + 0x24,
                                 0xc);
            if (iVar2 == 0) {
              FUN_00dfe9b0(auStack_78,param_1,local_2c[0]);
            }
            else {
              FUN_00dfc150(auStack_78,param_1,local_2c[0]);
            }
          }
        }
      }
    }
  }
  if (param_1[0x92] == '\0') {
    *(char (*) [8])(param_1 + 0x34) = (char  [8])0x6e776f6e6b6e55;
    *(undefined2 *)(param_1 + 0x3c) = 0;
    pcVar4 = "Unknown";
    puVar5 = (undefined8 *)(param_1 + 0x3e);
    for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *(undefined8 *)pcVar4;
      pcVar4 = pcVar4 + 8;
      puVar5 = puVar5 + 1;
    }
  }
  return param_1;
}

