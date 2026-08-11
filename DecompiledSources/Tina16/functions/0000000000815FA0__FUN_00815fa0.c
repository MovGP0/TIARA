/* Ghidra address: 00815fa0 */
/* Ghidra symbol: FUN_00815fa0 */


int FUN_00815fa0(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_2c;
  
  if (param_2 == 0) {
    local_2c = 0;
  }
  else {
    local_40 = param_2;
    if (param_3 == 0) {
      local_2c = FUN_007e2ef0(*(undefined8 *)(param_2 + 0x80));
      FUN_00419260(*(longlong *)(param_1 + 0x110) + 0x40,&DAT_007f7990,1,(longlong)local_2c);
      iVar3 = 0;
      iVar2 = local_2c;
      if (-1 < local_2c + -1) {
        do {
          uVar4 = FUN_007e2f10(*(undefined8 *)(local_40 + 0x80),iVar3);
          *(undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x40) + 8 + (longlong)iVar3 * 0x20) =
               uVar4;
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    else {
      iVar2 = FUN_007e2ef0(*(undefined8 *)(param_2 + 0x80));
      iVar3 = FUN_007e2ef0(*(undefined8 *)(param_3 + 0x80));
      FUN_00419260(*(longlong *)(param_1 + 0x110) + 0x40,&DAT_007f7990,1,(longlong)(iVar2 + iVar3));
      iVar2 = FUN_007e2ef0(*(undefined8 *)(param_3 + 0x80));
      iVar3 = 0;
      local_2c = iVar2;
      if (-1 < iVar2 + -1) {
        do {
          uVar4 = FUN_007e2f10(*(undefined8 *)(param_3 + 0x80),iVar3);
          *(undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x40) + 8 + (longlong)iVar3 * 0x20) =
               uVar4;
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = FUN_007e2ef0(*(undefined8 *)(local_40 + 0x80));
      iVar2 = iVar2 + -1;
      if (-1 < iVar2) {
        do {
          uVar4 = FUN_007e2f10(*(undefined8 *)(local_40 + 0x80),iVar2);
          cVar1 = FUN_00815f10(auStack_68,uVar4);
          if (cVar1 != '\0') {
            iVar6 = 0;
            iVar3 = local_2c;
            iVar7 = -1;
            if (-1 < local_2c + -1) {
              do {
                lVar5 = FUN_007e2f10(*(undefined8 *)(local_40 + 0x80),iVar2);
                iVar7 = iVar6;
                if (*(byte *)(lVar5 + 0x87) <=
                    *(byte *)(*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x40) + 8 +
                               (longlong)iVar6 * 0x20) + 0x87)) break;
                iVar6 = iVar6 + 1;
                iVar3 = iVar3 + -1;
                iVar7 = -1;
              } while (iVar3 != 0);
            }
            if (iVar7 == -1) {
              iVar7 = local_2c;
            }
            uVar4 = FUN_007e2f10(*(undefined8 *)(local_40 + 0x80),iVar2);
            FUN_00815e50(auStack_68,iVar7,&local_2c,uVar4);
          }
          iVar2 = iVar2 + -1;
        } while (iVar2 != -1);
      }
    }
  }
  return local_2c;
}

