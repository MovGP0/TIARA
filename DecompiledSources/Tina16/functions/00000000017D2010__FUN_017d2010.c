/* Ghidra address: 017d2010 */
/* Ghidra symbol: FUN_017d2010 */


void FUN_017d2010(longlong param_1,char param_2)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  iVar7 = *(int *)(param_1 + 0x2d8);
  iVar6 = 1;
  if (0 < iVar7) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar6 * 8);
      if (lVar1 != 0) {
        plVar4 = (longlong *)FUN_019a45d0();
        iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,*(undefined8 *)(lVar1 + 0x128));
        if ((-1 < iVar3) &&
           ((sVar2 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                               (*(longlong **)(lVar1 + 0x128)), sVar2 == 0x34 ||
            (sVar2 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                               (*(longlong **)(lVar1 + 0x128)), sVar2 == 0x3b)))) {
          if (param_2 == '\0') {
            puVar5 = (undefined8 *)FUN_01b05ad0(lVar1,3,0,&local_29,&local_2a,&local_2b);
            *puVar5 = 0x3f50624dd2f1a9fc;
          }
          else {
            puVar5 = (undefined8 *)FUN_01b05ad0(lVar1,3,0,&local_29,&local_2a,&local_2b);
            *puVar5 = 0;
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

