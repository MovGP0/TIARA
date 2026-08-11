/* Ghidra address: 01b5e310 */
/* Ghidra symbol: FUN_01b5e310 */


longlong FUN_01b5e310(longlong *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 local_68;
  undefined8 local_60 [2];
  int local_4c;
  longlong local_48;
  byte local_39 [9];
  
  local_68 = 0;
  local_60[0] = 0;
  FUN_0153a7f0(&local_48,&local_4c,1,*(undefined8 *)(param_1[10] + 0x408));
  plVar1 = (longlong *)param_1[1];
  if (((plVar1 != (longlong *)0x0) && (local_48 != 0)) &&
     ((**(code **)(*plVar1 + 0x90))(plVar1), local_4c != 0)) {
    (**(code **)(*param_1 + 0x78))(param_1,local_39);
    iVar5 = 0;
    iVar7 = local_4c;
    if (-1 < local_4c + -1) {
      do {
        lVar3 = FUN_01107790(&PTR_FUN_011061a0,1);
        lVar6 = (longlong)iVar5;
        plVar1 = *(longlong **)(local_48 + lVar6 * 8);
        (**(code **)(*plVar1 + 0x288))(plVar1,local_60);
        FUN_00414ad0(lVar3 + 8,local_60[0]);
        if (*(longlong *)(lVar3 + 8) == 0) {
          FUN_0043f750(&local_68,iVar5);
          FUN_00416ba0(lVar3 + 8,&DAT_01b5e538,local_68);
          uVar4 = FUN_019a45d0();
          uVar4 = FUN_0198d430(uVar4);
          FUN_017bf050(*(undefined8 *)(local_48 + lVar6 * 8),uVar4,*(undefined8 *)(lVar3 + 8));
        }
        *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(local_48 + lVar6 * 8);
        FUN_010c04f0(lVar3 + 8);
        uVar2 = FUN_0040c770((double)local_39[0] / 2.0);
        *(undefined1 *)(lVar3 + 0x2a) = uVar2;
        (**(code **)(*param_1 + 0x88))(param_1,lVar3 + 0x2a,lVar3 + 0x118,1);
        *(int *)(lVar3 + 0x80) = iVar5 % 0xb;
        (**(code **)(*(longlong *)param_1[1] + 0x80))
                  ((longlong *)param_1[1],*(undefined8 *)(lVar3 + 8),lVar3);
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    FUN_004095f0(local_48,(longlong)(local_4c * 8));
  }
  lVar3 = param_1[1];
  FUN_00414560(&local_68,2);
  return lVar3;
}

