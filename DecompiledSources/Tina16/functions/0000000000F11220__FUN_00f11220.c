/* Ghidra address: 00f11220 */
/* Ghidra symbol: FUN_00f11220 */


void FUN_00f11220(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 local_50;
  undefined1 local_48 [32];
  
  plVar3 = (longlong *)FUN_005fd250(&PTR_FUN_005f3290,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,param_2[0xf]);
  (**(code **)(*(longlong *)param_2[0xf] + 0x10))
            ((longlong *)param_2[0xf],*(undefined8 *)(param_1 + 0x60));
  FUN_005fd640(param_2[0xf],0xf);
  (**(code **)(*param_2 + 200))
            (param_2,**(undefined4 **)(param_1 + 0x50),(*(undefined4 **)(param_1 + 0x50))[1]);
  iVar4 = 2;
  if (1 < *(int *)(param_1 + 0x48)) {
    iVar5 = *(int *)(param_1 + 0x48) + -1;
    do {
      FUN_00498350(local_48,0,0,0,0);
      iVar2 = thunk_FUN_03b7fa88(param_1 + 0x14,local_48);
      if (iVar2 == 0) {
        local_50 = FUN_00498310(*(undefined4 *)
                                 (*(longlong *)(param_1 + 0x50) + -8 + (longlong)(iVar4 + -1) * 8),
                                *(undefined4 *)
                                 (*(longlong *)(param_1 + 0x50) + -4 + (longlong)(iVar4 + -1) * 8));
        cVar1 = FUN_01a8e4c0(param_1 + 0x14,&local_50);
        if (cVar1 != '\0') {
          local_50 = FUN_00498310(*(undefined4 *)
                                   (*(longlong *)(param_1 + 0x50) + -8 + (longlong)iVar4 * 8),
                                  *(undefined4 *)
                                   (*(longlong *)(param_1 + 0x50) + -4 + (longlong)iVar4 * 8));
          cVar1 = FUN_01a8e4c0(param_1 + 0x14,&local_50);
          if (cVar1 != '\0') goto LAB_00f11362;
        }
        local_50 = FUN_00498310(*(undefined4 *)
                                 (*(longlong *)(param_1 + 0x50) + -8 + (longlong)(iVar4 + -1) * 8),
                                *(undefined4 *)
                                 (*(longlong *)(param_1 + 0x50) + -4 + (longlong)(iVar4 + -1) * 8));
        FUN_00498310(*(undefined4 *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)iVar4 * 8),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)iVar4 * 8));
        FUN_01d2b6e0(param_1);
      }
      else {
LAB_00f11362:
        (**(code **)(*param_2 + 200))
                  (param_2,*(undefined4 *)
                            (*(longlong *)(param_1 + 0x50) + -8 + (longlong)(iVar4 + -1) * 8),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)(iVar4 + -1) * 8))
        ;
        (**(code **)(*param_2 + 0xc0))(param_2);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  (**(code **)(*(longlong *)param_2[0xf] + 0x10))((longlong *)param_2[0xf],plVar3);
  FUN_00410f20(plVar3);
  return;
}

