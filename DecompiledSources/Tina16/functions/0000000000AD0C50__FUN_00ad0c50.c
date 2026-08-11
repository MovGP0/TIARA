/* Ghidra address: 00ad0c50 */
/* Ghidra symbol: FUN_00ad0c50 */


undefined8 FUN_00ad0c50(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_38 [32];
  
  *param_2 = 0;
  *param_3 = 0;
  uVar6 = 0;
  FUN_00ad3020(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x50));
  uVar4 = FUN_00414480(param_2);
  cVar2 = FUN_00ad12a0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x50),uVar4);
  if (cVar2 != '\0') {
    FUN_00ad3020(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x50));
    FUN_00414480(param_3);
    uVar6 = 1;
    if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x50) + 0x20) == 0x3d) {
      FUN_00ad1170(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x50));
      FUN_00ad3020(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x50));
      cVar2 = FUN_00ad0980(auStack_38,param_3);
      if (cVar2 == '\0') {
        do {
          uVar1 = *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x50) + 0x20);
          if (uVar1 < 0x21) {
            if (uVar1 == 0x20) {
              return 1;
            }
            if (uVar1 == 0) {
              return 1;
            }
            if (uVar1 == 9) {
              return 1;
            }
            if (uVar1 == 0xd) {
              return 1;
            }
          }
          else {
            if (uVar1 == 0x2d) {
              return 1;
            }
            if (uVar1 == 0x3e) {
              return 1;
            }
          }
          iVar3 = 0;
          if (*param_3 != 0) {
            iVar3 = *(int *)(*param_3 + -4);
          }
          FUN_004169f0(param_3,iVar3 + 1);
          lVar5 = FUN_00414de0(param_3);
          iVar3 = 0;
          if (*param_3 != 0) {
            iVar3 = *(int *)(*param_3 + -4);
          }
          *(ushort *)(lVar5 + -2 + (longlong)iVar3 * 2) = uVar1;
          FUN_00ad1170(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x50));
        } while( true );
      }
    }
  }
  return uVar6;
}

