/* Ghidra address: 010828f0 */
/* Ghidra symbol: FUN_010828f0 */


void FUN_010828f0(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00414480(param_1 + 0xb38);
  *(undefined8 *)(param_1 + 0xc00) = 0;
  *(undefined1 *)(param_1 + 0xb58) = 0;
  FUN_0108d0e0();
  FUN_00724420(*(undefined8 *)(param_1 + 0x700),*(undefined8 *)PTR_DAT_020049a0);
  FUN_00724420(*(undefined8 *)(param_1 + 0x770),*(undefined8 *)PTR_DAT_020049a0);
  FUN_010792a0(param_1,0);
  *(undefined4 *)(param_1 + 0xa98) = 1;
  *(undefined1 *)(param_1 + 0xb50) = 0;
  *(undefined1 *)(param_1 + 0xb51) = 0;
  *(undefined1 *)(param_1 + 0xb52) = 1;
  *(undefined1 *)(param_1 + 0xb56) = 1;
  *(undefined8 *)(param_1 + 0xb88) = 0;
  *(undefined8 *)(param_1 + 0xb90) = 0;
  *(undefined8 *)(param_1 + 0xad0) = 0;
  *(undefined4 *)(param_1 + 0x4c30) = 1;
  *(undefined4 *)(param_1 + 0x4c9c) = 1;
  *(undefined8 *)(param_1 + 0xab0) = 0;
  *(undefined8 *)(param_1 + 0xab8) = 0;
  *(undefined8 *)(param_1 + 0xac0) = 0;
  FUN_00414480(param_1 + 0xaf8);
  *(undefined8 *)(param_1 + 0xb20) = 0;
  *(undefined1 *)(param_1 + 0xbfc) = 0;
  *(undefined4 *)(param_1 + 0xaa8) = 1;
  *(undefined8 *)(param_1 + 0xb80) = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0xb60) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0xb68) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x4d30) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x4d40) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x4d38) = uVar2;
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa78));
  FUN_010a7790(uVar2,param_1 + 0x4c68,param_1 + 0x4c6c,param_1 + 0x4c70);
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0xb98) = uVar2;
  *(undefined4 *)(param_1 + 0xa9c) = 0x16;
  FUN_00414480(param_1 + 0x4c50);
  *(undefined1 *)(param_1 + 0xb53) = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0xbb0) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 3000) = uVar2;
  *(undefined1 *)(param_1 + 0xbd3) = *(undefined1 *)(*(longlong *)(param_1 + 0x950) + 0x328);
  uVar1 = PTR_DAT_020030c0[5];
  *(undefined1 *)(param_1 + 0xbd4) = uVar1;
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x958),uVar1);
  *(undefined4 *)(param_1 + 0xaa4) = 2;
  *(undefined1 *)(param_1 + 0xb55) = 0;
  *(undefined4 *)(param_1 + 0x4c60) = *(undefined4 *)(*(longlong *)PTR_DAT_02004030 + 0xf4);
  *(undefined4 *)(param_1 + 0x4c64) = *(undefined4 *)(*(longlong *)PTR_DAT_02004030 + 0xf0);
  *(undefined4 *)(*(longlong *)PTR_DAT_02004030 + 0xf4) = 1;
  *(undefined4 *)(*(longlong *)PTR_DAT_02004030 + 0xf0) = 4000;
  *(undefined1 *)(param_1 + 0xbe8) = 1;
  *(undefined1 *)(param_1 + 0x4d48) = 0;
  *(undefined1 *)(param_1 + 0x4d49) = 0;
  uVar2 = FUN_007d5080(&PTR_FUN_007d3710,1,param_1);
  FUN_006e4390(*(undefined8 *)(param_1 + 0x7e0),uVar2);
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x7e0) + 0x4e8) + 0xa9) = 0;
  uVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(param_1 + 0xba0) = uVar2;
  FUN_0060a8f0(uVar2,PTR_IMAGE_DOS_HEADER_0200c280,L"icon_breakpoint_line");
  FUN_007d59d0(*(undefined8 *)(*(longlong *)(param_1 + 0x7e0) + 0x4e8),
               *(undefined8 *)(param_1 + 0xba0),0);
  uVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(param_1 + 0xba8) = uVar2;
  FUN_0060a8f0(uVar2,PTR_IMAGE_DOS_HEADER_0200c280,L"icon_breakpoint_line_disabled");
  FUN_007d59d0(*(undefined8 *)(*(longlong *)(param_1 + 0x7e0) + 0x4e8),
               *(undefined8 *)(param_1 + 0xba8),0);
  FUN_01081d50(param_1,*(undefined8 *)(param_1 + 0xa28),*(undefined1 *)(param_1 + 0xb57));
  FUN_01081d50(param_1,*(undefined8 *)(param_1 + 0xa30),*(undefined1 *)(param_1 + 0xb57));
  *(undefined4 *)(param_1 + 0x4c88) = 0;
  *(undefined1 *)(param_1 + 0x4c34) = 0;
  *(undefined1 *)(param_1 + 0xbfd) = 0;
  *(undefined4 *)(param_1 + 0x4c94) = 0;
  *(undefined1 *)(param_1 + 0x6c4) = 0;
  *(undefined1 *)(param_1 + 0x4c35) = 1;
  *(undefined1 *)(param_1 + 0x4c36) = 0;
  FUN_00414480(param_1 + 0x4cb0);
  *(undefined1 *)(param_1 + 0xbd0) = 1;
  *(undefined1 *)(param_1 + 0xbd6) = 0;
  *(undefined1 *)(param_1 + 0xbd1) = 1;
  *(undefined1 *)(param_1 + 0xbd2) = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0xb70) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0xb78) = uVar2;
  *(undefined4 *)(param_1 + 0x4c20) = 0x20;
  *(undefined4 *)(param_1 + 0x6c0) = 0;
  FUN_00414480(param_1 + 0xb18);
  FUN_00419260(param_1 + 0x4d18,&DAT_00e02168,1,10);
  FUN_01081d20(param_1,*(undefined8 *)(param_1 + 0x940),0);
  if (0 < *(int *)(PTR_DAT_020030c0 + 0x10)) {
    FUN_0064cbf0(param_1,*(int *)(PTR_DAT_020030c0 + 0x10));
  }
  if (0 < *(int *)(PTR_DAT_020030c0 + 0x14)) {
    FUN_0064cc50(param_1,*(int *)(PTR_DAT_020030c0 + 0x14));
  }
  FUN_00414ad0(param_1 + 0x4cc0,L"errors.txt");
  FUN_00414ad0(param_1 + 0x4cc8,&DAT_010830d8);
  FUN_00414ad0(param_1 + 0x4cd0,L"--output=-mcof,+elf:multilocs --stack=compiled:auto:auto ");
  FUN_00416cd0(param_1 + 0x4cd8,3,
               L"-P -N255 --warn=0 --asmlist --opt=default,+asm,+asmfile,-speed,+space,-debug --addrqual=ignore --mode=free -E"
               ,*(undefined8 *)(param_1 + 0x4cc0),&DAT_01083254);
  FUN_00414ad0(param_1 + 0x4ce0,
               L"--runtime=default,+clear,+init,-keep,-no_startup,+osccal,-resetbits,-download,-stackcall,+clib "
              );
  FUN_00414ad0(param_1 + 0x4ce8,
               L"--double=24 --float=24 --output=default,-inhx032 --summary=default,-psect,-class,+mem,-hex,-file "
              );
  FUN_00414ad0(param_1 + 0x4cf0,L"--emi=wordwrite ");
  FUN_00414ad0(param_1 + 0x4cf8,
               L"-c -mcpu=%s -g -omf=elf -DXPRJ_default=default -legacy-libc -O0 -msmart-io=1 -Wall -msfr-warn=off %s -o Debug\\%s"
              );
  FUN_00414ad0(param_1 + 0x4d00,
               L"-mcpu=%s -omf=elf -DXPRJ_default=default -legacy-libc -Wl,,,--defsym=__MPLAB_BUILD=1,,--script=%s,--stack=16,--check-sections,--data-init,--pack-data,--handles,--isr,--no-gc-sections,--fill-upper=0,--stackguard=16,--no-force-link,--smart-io"
              );
  FUN_00414ad0(param_1 + 0x4d08,
               L"-g -x c -c -mprocessor=%s -DXPRJ_default=default -legacy-libc %s -o Debug\\%s");
  FUN_00414ad0(param_1 + 0x4d10,
               L"-mprocessor=%s -DXPRJ_default=default -legacy-libc -Wl,--defsym=__MPLAB_BUILD=1,--no-code-in-dinit,--no-dinit-in-serial-mem"
              );
  uVar2 = *(undefined8 *)(param_1 + 0xa78);
  uVar3 = FUN_00e81400(&PTR_FUN_00e80d78,1,uVar2);
  FUN_00c0f7b0(uVar2,uVar3);
  FUN_00c08ff0(*(undefined8 *)(param_1 + 0xa78),4);
  uVar2 = FUN_01064180(&DAT_010583d8,1);
  *(undefined8 *)(param_1 + 0xbf0) = uVar2;
  FUN_00416ba0(local_20,*(undefined8 *)PTR_DAT_020049a0,L"\\Vhdl\\MCU\\arduino_boards.xml");
  FUN_01063660(uVar2,local_20[0]);
  *(undefined4 *)(param_1 + 0x4ca8) = 0;
  FUN_00414480(local_20);
  return;
}

