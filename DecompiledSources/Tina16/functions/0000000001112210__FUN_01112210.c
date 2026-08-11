/* Ghidra address: 01112210 */
/* Ghidra symbol: FUN_01112210 */


void FUN_01112210(longlong *param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong uVar3;
  
  iVar4 = 0;
  bVar1 = false;
  uVar3 = 0;
  do {
    if ((char)param_1[uVar3 * 4 + 0x93] != '\0') {
      if ((iVar4 <= param_2) && (param_2 <= iVar4 + *(int *)((longlong)param_1 + 0x5d4))) {
        if ((((char)param_1[0xcb] == '\0') ||
            (*(char *)((longlong)param_1 + uVar3 * 0x20 + 0x49b) == '\0')) &&
           (*(char *)((longlong)param_1 + uVar3 * 0x20 + 0x499) == '\0')) {
          return;
        }
        *(char *)((longlong)param_1 + 0x5c2) = (char)uVar3;
        bVar1 = true;
        goto code_r0x011122c3;
      }
      iVar4 = iVar4 + *(int *)((longlong)param_1 + 0x5d4) + -1;
    }
    bVar2 = (char)uVar3 + 1;
    uVar3 = (ulonglong)bVar2;
    if (bVar2 == 9) {
code_r0x011122c3:
      if (bVar1) {
        if (*(char *)((longlong)param_1 + 0x5c2) != (char)param_1[0xc2]) {
          *(char *)(param_1 + 0xc2) = *(char *)((longlong)param_1 + 0x5c2);
          (**(code **)(*param_1 + 0x260))(param_1);
        }
        FUN_004238d0(&local_38,iVar4,0,iVar4 + *(int *)((longlong)param_1 + 0x5d4),
                     *(undefined4 *)((longlong)param_1 + 0x9c));
        *(undefined8 *)((longlong)param_1 + 0x5c4) = local_38;
        *(undefined8 *)((longlong)param_1 + 0x5cc) = uStack_30;
        *(undefined1 *)(param_1 + 0xb8) = 1;
        *(undefined1 *)((longlong)param_1 + 0x5c1) = 1;
        FUN_011116f0(param_1,uVar3,iVar4);
        FUN_0064e190(param_1,1);
      }
      return;
    }
  } while( true );
}

