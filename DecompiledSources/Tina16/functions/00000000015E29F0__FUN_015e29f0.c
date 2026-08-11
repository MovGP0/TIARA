/* Ghidra address: 015e29f0 */
/* Ghidra symbol: FUN_015e29f0 */


void FUN_015e29f0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_68;
  FUN_015ca1c0(param_1);
  FUN_015ca200(param_1);
  local_20 = FUN_015e1d70(&PTR_FUN_015be748,1,0);
  FUN_00414ad0(local_20 + 0x88,param_2);
  FUN_015dca70(local_20,0x40);
  *(undefined1 *)(*(longlong *)(local_20 + 0xc0) + 0xb) = *(undefined1 *)(param_1[0x18] + 0xb);
  FUN_004b6dc0(param_1[0x4a],*(undefined8 *)(param_1[0x47] + 0xb0));
  FUN_004b6dc0(*(undefined8 *)(*(longlong *)(local_20 + 0x238) + 8),
               *(undefined8 *)(*(longlong *)(local_20 + 0x238) + 0xa0));
  cVar1 = FUN_015e1e80(auStack_68,*(undefined8 *)(*(longlong *)(local_20 + 0x238) + 8),param_1[0x4a]
                       ,*(longlong *)(*(longlong *)(local_20 + 0x238) + 0xb0) -
                        *(longlong *)(*(longlong *)(local_20 + 0x238) + 0xa0));
  if (cVar1 == '\0') {
    FUN_004b6e40(param_1[0x4a],*(undefined8 *)(param_1[0x47] + 0xb0));
  }
  else {
    FUN_015e2780(auStack_68,param_1 + 0x47,local_20 + 0x238);
  }
  FUN_015c8e90(param_1[0x47],1,0);
  if (*(char *)((longlong)param_1 + 0x101) != '\0') {
    local_48 = (longlong *)CONCAT71(local_48._1_7_,2);
    local_40 = param_1 + 0x20;
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,0x4059000000000000,10);
    local_48 = param_1 + 0x20;
    (**(code **)(*param_1 + 0x98))(param_1,0x4059000000000000,10,2);
  }
  FUN_015dcd20(local_20);
  FUN_00410f20(local_20);
  return;
}

