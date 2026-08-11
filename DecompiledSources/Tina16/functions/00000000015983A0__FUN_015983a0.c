/* Ghidra address: 015983a0 */
/* Ghidra symbol: FUN_015983a0 */


undefined8 FUN_015983a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (((param_2 == 0) || (param_1 == 0)) || (*(longlong *)(param_2 + 0x28) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x28);
    FUN_01596930(param_1,param_2,0x54);
    plVar3 = (longlong *)(**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),1,0x16f8);
    if (plVar3 == (longlong *)0x0) {
      uVar2 = 0xfffffffc;
    }
    else {
      *(longlong **)(param_1 + 0x28) = plVar3;
      FUN_01596930(plVar3,lVar1,0x16f8);
      *plVar3 = param_1;
      uVar2 = (**(code **)(param_1 + 0x30))
                        (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)((longlong)plVar3 + 0x39),2)
      ;
      *(undefined8 *)((longlong)plVar3 + 0x45) = uVar2;
      uVar2 = (**(code **)(param_1 + 0x30))
                        (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)((longlong)plVar3 + 0x39),2)
      ;
      *(undefined8 *)((longlong)plVar3 + 0x51) = uVar2;
      uVar2 = (**(code **)(param_1 + 0x30))
                        (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)((longlong)plVar3 + 0x65),2)
      ;
      *(undefined8 *)((longlong)plVar3 + 0x59) = uVar2;
      lVar4 = (**(code **)(param_1 + 0x30))
                        (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)((longlong)plVar3 + 0x16ce),
                         4);
      *(longlong *)((longlong)plVar3 + 0xc) = lVar4;
      if (((*(longlong *)((longlong)plVar3 + 0x45) == 0) ||
          (*(longlong *)((longlong)plVar3 + 0x51) == 0)) ||
         ((*(longlong *)((longlong)plVar3 + 0x59) == 0 ||
          (*(longlong *)((longlong)plVar3 + 0xc) == 0)))) {
        FUN_01597eb0(param_1);
        uVar2 = 0xfffffffc;
      }
      else {
        FUN_01596930(*(undefined8 *)((longlong)plVar3 + 0x45),*(undefined8 *)(lVar1 + 0x45),
                     *(int *)((longlong)plVar3 + 0x39) << 1);
        FUN_01596930(*(undefined8 *)((longlong)plVar3 + 0x51),*(undefined8 *)(lVar1 + 0x51),
                     (ulonglong)*(uint *)((longlong)plVar3 + 0x39) << 1);
        FUN_01596930(*(undefined8 *)((longlong)plVar3 + 0x59),*(undefined8 *)(lVar1 + 0x59),
                     (ulonglong)*(uint *)((longlong)plVar3 + 0x65) << 1);
        FUN_01596930(*(undefined8 *)((longlong)plVar3 + 0xc),*(undefined8 *)(lVar1 + 0xc),
                     *(undefined4 *)((longlong)plVar3 + 0x14));
        plVar3[3] = (*(longlong *)(lVar1 + 0x18) - *(longlong *)(lVar1 + 0xc)) +
                    *(longlong *)((longlong)plVar3 + 0xc);
        *(ulonglong *)((longlong)plVar3 + 0x16d6) =
             lVar4 + ((ulonglong)*(uint *)((longlong)plVar3 + 0x16ce) / 2) * 2;
        *(ulonglong *)((longlong)plVar3 + 0x16c6) =
             (ulonglong)*(uint *)((longlong)plVar3 + 0x16ce) * 3 +
             *(longlong *)((longlong)plVar3 + 0xc);
        *(longlong *)((longlong)plVar3 + 0xb31) = (longlong)plVar3 + 0xad;
        *(longlong *)((longlong)plVar3 + 0xb45) = (longlong)plVar3 + 0x9a1;
        *(longlong *)((longlong)plVar3 + 0xb59) = (longlong)plVar3 + 0xa95;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

