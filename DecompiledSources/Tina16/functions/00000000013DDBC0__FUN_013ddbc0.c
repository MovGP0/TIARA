/* Ghidra address: 013ddbc0 */
/* Ghidra symbol: FUN_013ddbc0 */


void FUN_013ddbc0(void)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_18 [16];
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0) + 0x10);
  uVar2 = (**(code **)(*plVar1 + 0xc0))
                    (plVar1,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x790));
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x790) + 0x18);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (iVar3 == 0) {
    FUN_01cec240(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),uVar2,
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  }
  else {
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_18);
    FUN_013d28c0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x790),
                 *(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),local_18);
    FUN_01cec9c0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),uVar2,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
                 *(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),0);
  }
  *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x790) = 0;
  return;
}

