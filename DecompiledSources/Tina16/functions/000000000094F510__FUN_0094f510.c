/* Ghidra address: 0094f510 */
/* Ghidra symbol: FUN_0094f510 */


undefined8 FUN_0094f510(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (param_3 == 0) {
    plVar1 = *(longlong **)(param_1 + 0x68);
    if (plVar1 == (longlong *)0x0) {
      local_90 = 0;
    }
    else {
      iVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,param_2);
      if (iVar2 < 0) {
        local_90 = 0;
      }
      else {
        local_90 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x40))
                             (*(longlong **)(param_1 + 0x68),iVar2);
        (**(code **)(**(longlong **)(param_1 + 0x68) + 0x98))(*(longlong **)(param_1 + 0x68),iVar2);
        FUN_00599af0(*(longlong *)(param_1 + 0x70) + 8,iVar2,5);
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x38))
                          (*(longlong **)(param_1 + 0x68));
        if (iVar2 == 0) {
          FUN_00410f20(*(undefined8 *)(param_1 + 0x68));
          *(undefined8 *)(param_1 + 0x68) = 0;
          FUN_00410f20(*(undefined8 *)(param_1 + 0x70));
          *(undefined8 *)(param_1 + 0x70) = 0;
        }
      }
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x68);
    if (plVar1 == (longlong *)0x0) {
      uVar3 = FUN_00410e60(&PTR_FUN_008f5158,1);
      *(undefined8 *)(param_1 + 0x68) = uVar3;
      uVar3 = FUN_0099e410(&PTR_FUN_00933e00,1);
      *(undefined8 *)(param_1 + 0x70) = uVar3;
      local_90 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x70))
                (*(longlong **)(param_1 + 0x68),param_2,param_3);
      local_78 = *param_4;
      uStack_70 = param_4[1];
      FUN_005980d0(*(longlong *)(param_1 + 0x70) + 8,&local_78);
    }
    else {
      iVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,param_2);
      if (iVar2 == -1) {
        local_90 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x68) + 0x70))
                  (*(longlong **)(param_1 + 0x68),param_2,param_3);
        local_48 = *param_4;
        uStack_40 = param_4[1];
        FUN_005980d0(*(longlong *)(param_1 + 0x70) + 8,&local_48);
      }
      else {
        local_90 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x40))
                             (*(longlong **)(param_1 + 0x68),iVar2);
        (**(code **)(**(longlong **)(param_1 + 0x68) + 0x48))
                  (*(longlong **)(param_1 + 0x68),iVar2,param_2);
        (**(code **)(**(longlong **)(param_1 + 0x68) + 0x50))
                  (*(longlong **)(param_1 + 0x68),iVar2,param_3);
        local_60 = *param_4;
        uStack_58 = param_4[1];
        FUN_005956a0(*(longlong *)(param_1 + 0x70) + 8,&local_60,iVar2);
      }
    }
  }
  return local_90;
}

