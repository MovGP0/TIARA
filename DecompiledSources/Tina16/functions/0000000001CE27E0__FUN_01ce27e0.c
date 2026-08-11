/* Ghidra address: 01ce27e0 */
/* Ghidra symbol: FUN_01ce27e0 */


void FUN_01ce27e0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))(*(longlong **)(param_1 + 0x70),0);
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))(*(longlong **)(param_1 + 0x70),0);
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))(*(longlong **)(param_1 + 0x78),0);
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))(*(longlong **)(param_1 + 0x78),0);
    if ((*(double *)(lVar3 + 0xc0) - *(double *)(lVar4 + 0xb8)) /
        (*(double *)(lVar5 + 0xc0) - *(double *)(lVar6 + 0xb8)) <= 2.0) {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                        (*(longlong **)(param_1 + 0x70),0);
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                        (*(longlong **)(param_1 + 0x70),0);
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),0);
      lVar6 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),0);
      if ((*(double *)(lVar3 + 0xc0) - *(double *)(lVar4 + 0xb8)) /
          (*(double *)(lVar5 + 0xc0) - *(double *)(lVar6 + 0xb8)) < 0.5) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),0);
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),0);
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),0);
        lVar6 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),0);
        dVar7 = ((*(double *)(lVar3 + 0xc0) - *(double *)(lVar4 + 0xb8)) -
                (*(double *)(lVar5 + 0xc0) - *(double *)(lVar6 + 0xb8))) / 2.0;
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),0);
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),0);
        *(double *)(lVar3 + 0xc0) = *(double *)(lVar4 + 0xc0) + dVar7;
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),0);
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),0);
        *(double *)(lVar3 + 0xb8) = *(double *)(lVar4 + 0xb8) - dVar7;
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),0);
        uVar1 = FUN_01ccdde0(lVar3);
        uVar2 = FUN_01ccde00(lVar3);
        FUN_01cd43b0(lVar3,uVar1,uVar2);
        *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(lVar3 + 0xb8);
        *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(lVar3 + 0xc0);
      }
    }
    else {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                        (*(longlong **)(param_1 + 0x70),0);
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                        (*(longlong **)(param_1 + 0x70),0);
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),0);
      lVar6 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),0);
      dVar7 = ((*(double *)(lVar3 + 0xc0) - *(double *)(lVar4 + 0xb8)) -
              (*(double *)(lVar5 + 0xc0) - *(double *)(lVar6 + 0xb8))) / 2.0;
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),0);
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),0);
      *(double *)(lVar3 + 0xc0) = *(double *)(lVar4 + 0xc0) + dVar7;
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),0);
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),0);
      *(double *)(lVar3 + 0xb8) = *(double *)(lVar4 + 0xb8) - dVar7;
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),0);
      uVar1 = FUN_01ccddc0(lVar3);
      uVar2 = FUN_01ccddd0(lVar3);
      FUN_01cd43b0(lVar3,uVar1,uVar2);
      *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(lVar3 + 0xb8);
      *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(lVar3 + 0xc0);
    }
  }
  return;
}

