/* Ghidra address: 017ad290 */
/* Ghidra symbol: FUN_017ad290 */


longlong * FUN_017ad290(ushort param_1,longlong param_2)

{
  longlong *plVar1;
  uint in_stack_ffffffffffffff98;
  undefined1 local_30 [16];
  undefined8 local_20;
  
  plVar1 = (longlong *)0x0;
  if (param_1 < 0x68) {
    if (param_1 == 0x67) {
      plVar1 = (longlong *)
               FUN_017b3100(&PTR_FUN_017a83d8,1,0,0,L"Text",L"Arial",0x3ff0000000000000,0,
                            in_stack_ffffffffffffff98 & 0xffffff00,0x800000);
    }
    else if (param_1 == 100) {
      local_20 = FUN_00498310(0,0);
      plVar1 = (longlong *)
               FUN_017b02a0(&PTR_FUN_017a79c0,1,L"PinX",1,1,4,0x20,0,0x28,0,0,&local_20,
                            0x3ff0000000000000,0x80);
    }
    else if (param_1 == 0x65) {
      FUN_00498350(local_30,0,0,10,10);
      plVar1 = (longlong *)FUN_017b1980(&PTR_FUN_017a8d10,1,local_30,0x800000,1);
    }
    else {
      plVar1 = (longlong *)0x0;
      if (param_1 == 0x66) {
        FUN_00498350(local_30,0,0,10,10);
        plVar1 = (longlong *)FUN_017b2230(&PTR_FUN_017a9680,1,0,local_30,0x800000,0xffff,1);
      }
    }
  }
  else if (param_1 == 0x68) {
    local_20 = FUN_00498310(0,0);
    plVar1 = (longlong *)FUN_017b4250(&PTR_FUN_017a9fa8,1,&local_20,0,0x800000,0xffff,1);
  }
  else if (param_1 == 0x69) {
    FUN_00498350(local_30,0,0,10,10);
    plVar1 = (longlong *)FUN_017b5e80(&PTR_FUN_017abf88,1,0,local_30,0x800000);
  }
  if (param_2 != 0) {
    local_20 = FUN_00498310(0,0);
    (**(code **)(*plVar1 + 0xc0))(plVar1,param_2,&local_20);
  }
  return plVar1;
}

