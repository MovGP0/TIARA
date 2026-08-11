/* Ghidra address: 01d2bcc0 */
/* Ghidra symbol: FUN_01d2bcc0 */


void FUN_01d2bcc0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  if (1 < *(int *)(param_1 + 0x48)) {
    (**(code **)(*(longlong *)param_2[0xf] + 0x10))
              ((longlong *)param_2[0xf],*(undefined8 *)(param_1 + 0x60));
    uVar2 = FUN_005fd4d0(*(undefined8 *)(param_1 + 0x60));
    uVar2 = FUN_01a90ee0(uVar2);
    FUN_005fd4e0(param_2[0xf],uVar2);
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar2 = FUN_01a90ee0(0xff);
      FUN_005fd4e0(param_2[0xf],uVar2);
    }
    FUN_005fd640(param_2[0xf],0xf);
    (**(code **)(*param_2 + 200))
              (param_2,**(undefined4 **)(param_1 + 0x50),(*(undefined4 **)(param_1 + 0x50))[1]);
    iVar4 = 2;
    if (1 < *(int *)(param_1 + 0x48)) {
      iVar5 = *(int *)(param_1 + 0x48) + -1;
      do {
        FUN_00498350(local_38,0,0,0,0);
        iVar3 = thunk_FUN_03b7fa88(param_1 + 0x14,local_38);
        if (iVar3 == 0) {
          local_40 = FUN_00498310(*(undefined4 *)
                                   (*(longlong *)(param_1 + 0x50) + -8 + (longlong)(iVar4 + -1) * 8)
                                  ,*(undefined4 *)
                                    (*(longlong *)(param_1 + 0x50) + -4 + (longlong)(iVar4 + -1) * 8
                                    ));
          cVar1 = FUN_01a8e4c0(param_1 + 0x14,&local_40);
          if (cVar1 != '\0') {
            local_40 = FUN_00498310(*(undefined4 *)
                                     (*(longlong *)(param_1 + 0x50) + -8 + (longlong)iVar4 * 8),
                                    *(undefined4 *)
                                     (*(longlong *)(param_1 + 0x50) + -4 + (longlong)iVar4 * 8));
            cVar1 = FUN_01a8e4c0(param_1 + 0x14,&local_40);
            if (cVar1 != '\0') goto LAB_01d2be1e;
          }
          local_40 = FUN_00498310(*(undefined4 *)
                                   (*(longlong *)(param_1 + 0x50) + -8 + (longlong)(iVar4 + -1) * 8)
                                  ,*(undefined4 *)
                                    (*(longlong *)(param_1 + 0x50) + -4 + (longlong)(iVar4 + -1) * 8
                                    ));
          FUN_00498310(*(undefined4 *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)iVar4 * 8),
                       *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)iVar4 * 8));
          FUN_01d2b6e0(param_1);
        }
        else {
LAB_01d2be1e:
          (**(code **)(*param_2 + 200))
                    (param_2,*(undefined4 *)
                              (*(longlong *)(param_1 + 0x50) + -8 + (longlong)(iVar4 + -1) * 8),
                     *(undefined4 *)
                      (*(longlong *)(param_1 + 0x50) + -4 + (longlong)(iVar4 + -1) * 8));
          (**(code **)(*param_2 + 0xc0))(param_2);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

